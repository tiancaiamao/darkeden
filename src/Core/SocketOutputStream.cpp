//////////////////////////////////////////////////////////////////////
//
// SocketOutputStream.cpp
//
// by Reiot
//
//////////////////////////////////////////////////////////////////////

#include "SocketOutputStream.h"
#include "Assert1.h"
#include "Packet.h"
#include "VSDateTime.h"

//////////////////////////////////////////////////////////////////////
// constructor
//////////////////////////////////////////////////////////////////////
SocketOutputStream::SocketOutputStream (Socket * sock , uint BufferLen )
	throw(Error )
: m_Socket(sock), m_Buffer(NULL), m_BufferLen(BufferLen), m_Head(0), m_Tail(0)
{
	__BEGIN_TRY
    m_Counter = 0;
//	Assert(m_Socket != NULL);
	Assert(m_BufferLen > 0);

	m_Buffer = new char[ m_BufferLen ];

	__END_CATCH
}


//////////////////////////////////////////////////////////////////////
// destructor
//////////////////////////////////////////////////////////////////////
SocketOutputStream::~SocketOutputStream ()
	throw(Error )
{
	__BEGIN_TRY

	if (m_Buffer != NULL ) {
		// ������ ���ܼ� ConnectException �� �޾� ������ ���¿���
		// flush�� �� ���� SIGPIPE �� ����. ������, ��������~
		// flush();
		delete [] m_Buffer;
		m_Buffer = NULL;
	}

	__END_CATCH
}


//////////////////////////////////////////////////////////////////////
//
// write data to stream (output buffer)
//
// *Notes*
//
// ((m_Head = m_Tail + 1 ) ||
//   ((m_Head == 0 ) && (m_Tail == m_BufferLen - 1 ) )
//
// �� �� ���� full �� �����Ѵٴ� ���� ���� ����. ������, ������ ��
// ������ ũ���� �׻� 1 �� ������ �Ѵٴ� ����!
//
//////////////////////////////////////////////////////////////////////
uint SocketOutputStream::write (const char * buf , uint len )
     throw(Error )
{
	__BEGIN_TRY

	// ���� ������ �� ������ �����Ѵ�.
	// (!) m_Head > m_Tail�� ���쿡 m_Head - m_Tail - 1 �� �����ߴ�. by sigi. 2002.9.16
	// �ٵ� buffer_resize�� �� ���� �Ͼ��. �ٸ��� ������ �ִµ� �ϴ� �� ã�����Ƿ�.. back. by sigi. 2002.9.23
	// �׽�Ʈ �غ��ϱ�.. �������̾���. ������ buffer resize�� ������ �Ͼ�� ������ ����? �ٽ� ����. by sigi. 2002.9.27
	uint nFree = ((m_Head <= m_Tail ) ?  m_BufferLen - m_Tail + m_Head - 1 : m_Head - m_Tail - 1);
					//m_Tail - m_Head - 1);

	// ������ �ϴ� ����Ÿ�� ũ�Ⱑ �� ������ ũ�⸦ �ʰ��� ���� ���۸� ������Ų��.
	if (len >= nFree )
		resize(len - nFree + 1);

	if (m_Head <= m_Tail ) {		// normal order

		//
		//    H   T
		// 0123456789
		// ...abcd...
		//

		if (m_Head == 0 ) {

			nFree = m_BufferLen - m_Tail - 1;
			memcpy(&m_Buffer[m_Tail] , buf , len);

		} else {

			nFree = m_BufferLen - m_Tail;
			if (len <= nFree )
				memcpy(&m_Buffer[m_Tail] , buf , len);
			else {
				memcpy(&m_Buffer[m_Tail] , buf , nFree);
				memcpy(m_Buffer , &buf[nFree] , len - nFree);
			}

		}

	} else {						// reversed order

		//
		//     T  H
		// 0123456789
		// abcd...efg
		//

		memcpy(&m_Buffer[m_Tail] , buf , len);

	}

	// advance m_Tail
	m_Tail = (m_Tail + len ) % m_BufferLen;

	return len;

	__END_CATCH
}


//////////////////////////////////////////////////////////////////////
// write packet to stream (output buffer)
//////////////////////////////////////////////////////////////////////
void SocketOutputStream::writePacket (const Packet * pPacket )
	 throw(ProtocolException , Error )
{
	__BEGIN_TRY

	// �켱 ��Ŷ���̵��� ��Ŷũ�⸦ ���¹��۷� ����.
	PacketID_t packetID = pPacket->getPacketID();
	write((char*)&packetID , szPacketID);

	PacketSize_t packetSize = pPacket->getPacketSize();
	write((char*)&packetSize , szPacketSize);

    write((char*)&m_Counter, 1);
    m_Counter++;
	// ���� ��Ŷ�ٵ��� ���¹��۷� ����.
	pPacket->write(*this);

	__END_CATCH
}


//////////////////////////////////////////////////////////////////////
// flush stream (output buffer) to socket
//////////////////////////////////////////////////////////////////////
uint SocketOutputStream::flush ()
     throw(IOException, ProtocolException, InvalidProtocolException, Error)
{
	__BEGIN_TRY

	Assert(m_Socket != NULL);

	uint nFlushed = 0;
	uint nSent = 0;
	uint nLeft;

	try {

		if (m_Head < m_Tail ) {

			//
			//    H   T
			// 0123456789
			// ...abcd...
			//

			nLeft = m_Tail - m_Head;

			while (nLeft > 0 ) {
				nSent = m_Socket->send(&m_Buffer[m_Head] , nLeft );

				// NonBlockException����. by sigi.2002.5.17
				if (nSent==0) return 0;

				nFlushed += nSent;
				nLeft -= nSent;
				m_Head += nSent;
			}

			Assert(nLeft == 0);

		} else if (m_Head > m_Tail ) {

			//
			//     T  H
			// 0123456789
			// abcd...efg
			//

			nLeft = m_BufferLen - m_Head;

			while (nLeft > 0 ) {
				nSent = m_Socket->send(&m_Buffer[m_Head] , nLeft );

				// NonBlockException����. by sigi.2002.5.17
				if (nSent==0) return 0;

				nFlushed += nSent;
				nLeft -= nSent;
				m_Head += nSent;
			}

			Assert(m_Head == m_BufferLen);

			m_Head = 0;

			nLeft = m_Tail;

			while (nLeft > 0 ) {
				nSent = m_Socket->send(&m_Buffer[m_Head] , nLeft );

				// NonBlockException����. by sigi.2002.5.17
				if (nSent==0) return 0;

				nFlushed += nSent;
				nLeft -= nSent;
				m_Head += nSent;
			}

			Assert(nLeft == 0);
		}

		if (m_Head != m_Tail )
		{
			cout << "m_Head : " << m_Head << endl;
			cout << "m_Tail : " << m_Tail << endl;
			Assert(m_Head == m_Tail);
		}

	}
	catch (NonBlockingIOException& )
	{
		// �Ϻθ� send�ǰ� ���� ����
		// by sigi. 2002.9.27
		if (nSent>0)
		{
			m_Head += nSent;
		}

		cerr << "SocketOutputStream NonBlockingIOException Check! " << endl;
		throw NonBlockingIOException("SocketOutputStream NonBlockingIOException Check");
	}
	catch (InvalidProtocolException & t )
	{
		// �Ϻθ� send�ǰ� ���� ����
		// by sigi. 2002.9.27
		if (nSent>0)
		{
			m_Head += nSent;
		}

		cerr << "SocketOutputStream Exception Check! " << endl;
		cerr << t.toString() << endl;
		throw InvalidProtocolException("SocketOutputStream Exception Check");
	}

	/*
	ofstream file("flush.txt", ios::out | ios::app);
	file << "flush send size: " << nFlushed << " left size : " << nLeft << endl;
	file.close();
	*/

	// ÷���� �ٽ�.. by sigi. 2002.9.26
	m_Head = m_Tail = 0;

	return nFlushed;

	__END_CATCH
}


//////////////////////////////////////////////////////////////////////
// resize buffer
//////////////////////////////////////////////////////////////////////
void SocketOutputStream::resize (int size )
	 throw(IOException , Error )
{
	__BEGIN_TRY

	//Assert(m_Socket != NULL);
	Assert(size != 0);

	int orgSize = size;

	// ���� resize�� �����ϱ� ���ؼ�.. ���� ������ 1/2��ŭ �÷����� by sigi. 2002.9.26
	size = max(size, (int)(m_BufferLen>>1));
	uint newBufferLen = m_BufferLen + size;
	uint len = length();

	if (size < 0 ) {

		// ���� ũ�⸦ ���̷��µ� ���ۿ� �����ִ� ����Ÿ��
		// �� �����Ƴ� ����
		if (newBufferLen < 0 || newBufferLen < len )
			throw IOException("new buffer is too small!");

	}

	// �� ���۸� �Ҵ��޴´�.
	char * newBuffer = new char[ newBufferLen ];

	// ���� ������ ������ �����Ѵ�.
	if (m_Head < m_Tail ) {

		//
		//    H   T
		// 0123456789
		// ...abcd...
		//

		memcpy(newBuffer , &m_Buffer[m_Head] , m_Tail - m_Head);

	} else if (m_Head > m_Tail ) {

		//
		//     T  H
		// 0123456789
		// abcd...efg
		//

		memcpy(newBuffer , &m_Buffer[m_Head] , m_BufferLen - m_Head);
		memcpy(&newBuffer[ m_BufferLen - m_Head ] , m_Buffer , m_Tail);

	}

	// ���� ���۸� �����Ѵ�.
	delete [] m_Buffer;

	// ���� �� ���� ũ�⸦ �缳���Ѵ�.
	m_Buffer = newBuffer;
	m_BufferLen = newBufferLen;
	m_Head = 0;
	m_Tail = len;

	VSDateTime current = VSDateTime::currentDateTime();

	if (m_Socket == NULL )
	{
		// m_Socket �� NULL �̶��� ���� �� ��Ʈ���� ���ε� ĳ��Ʈ�� ��Ʈ���̶��� ���̴�.
		// resize �� �ҷȴٴ� ���� ��Ŷ�� getPacketSize() �Լ��� �߸��Ǿ� �ִٴ� ���̴�.
		filelog("packetsizeerror.txt", "PacketID = %u", *(PacketID_t*)m_Buffer);
	}
	else
	{
		ofstream ofile("buffer_resized.log",ios::app);
		ofile << "[" << current.toString().c_str() << "] " << m_Socket->getHost().c_str() << " - SocketOutputStream resized: " << orgSize << " / " << size << "/" << m_BufferLen << " bytes!" << endl;
		ofile.close();
	}

	__END_CATCH
}


//////////////////////////////////////////////////////////////////////
// get data's size in buffer
//////////////////////////////////////////////////////////////////////
uint SocketOutputStream::length () const
     throw()
{
    if (m_Head < m_Tail )
        return m_Tail - m_Head;

    else if (m_Head > m_Tail )
        return m_BufferLen - m_Head + m_Tail;

    return 0;
}
