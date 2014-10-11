//////////////////////////////////////////////////////////////////////////////
// Filename    : CLLogoutHandler.cpp
// Written By  : Reiot
// Description :
//////////////////////////////////////////////////////////////////////////////

// include files
#include "CLLogout.h"
#include "Assert1.h"

#ifdef __LOGIN_SERVER__
#endif

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
void CLLogoutHandler::execute (CLLogout* pPacket , Player* pPlayer)
	 throw(ProtocolException , Error)
{
	__BEGIN_TRY __BEGIN_DEBUG_EX

#ifdef __LOGIN_SERVER__

	Assert(pPacket != NULL);
	Assert(pPlayer != NULL);

	throw DisconnectException("logout");

#endif

	__END_DEBUG_EX __END_CATCH
}
