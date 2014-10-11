//////////////////////////////////////////////////////////////////////////////
// Filename    : CGMoveHandler.cpp
// Written By  : reiot@ewestsoft.com , elca@ewestsoft.com
// Description :
//////////////////////////////////////////////////////////////////////////////

#include "CGMove.h"

#ifdef __GAME_SERVER__
	#include "GamePlayer.h"
	#include "Zone.h"
	#include "ZoneUtil.h"
	#include "Slayer.h"
	#include "Effect.h"
	#include "Timeval.h"

	#include "skill/Sniping.h"
#endif

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
void CGMoveHandler::execute (CGMove* pPacket , Player* pPlayer)
	 throw(ProtocolException , Error)
{
	__BEGIN_TRY __BEGIN_DEBUG_EX
		
#ifdef __GAME_SERVER__

	Assert(pPacket != NULL);
	Assert(pPlayer != NULL);

	GamePlayer* pGamePlayer = dynamic_cast<GamePlayer*>(pPlayer);

	if (pGamePlayer->getPlayerStatus() == GPS_NORMAL) 
	{
		// �� ���¿����� ũ��ó�� �ǰ� �ε��Ǿ����� �ϹǷ�, NULL �� �ƴϾ��� �Ѵ�.
		// PLAYER_INGAME ��ü�� ũ��ó �ε��� �����Ǿ����� �ǹ��Ѵ�.
		Creature* pCreature = pGamePlayer->getCreature();
		Assert(pCreature != NULL);

		if (pCreature->isDead()) return;

		// ��Ż �̵��� �������� �ұ��ϰ�, Ŭ���̾�Ʈ ��ã���� �������� ���ؼ�
		// �����󿡼� ũ��ó�� ������ IPM ���� �Ű��� ���¿��� CGMove �� ���ƿ�
		// ���ɼ��� �ִ�. ����..
		if (pCreature->getZone() == NULL) return;
	
		Zone* pZone = pCreature->getZone();
		Assert(pZone != NULL);

		if (pCreature->isSlayer() && pCreature->isFlag(Effect::EFFECT_CLASS_SNIPING_MODE))
		{
			g_Sniping.checkRevealRatio(pCreature, 10, 20);
		}

		// Ư�� PC�� �̵��� �������� ó���Ǵ� ������, PC�� �̵��� ���� �ִ� �ٸ� PC�鿡��
		// ���ε�ĳ��Ʈ�ؾ� �ϱ� �����̴�. �̶�, CGMove ��Ŷ�� �����Ӹ� �ƴ϶� ���� ��ǥ��
		// ���Ե� ������, ���� üũ�� �ϱ� ���ؼ��̴�.

		pZone->movePC(pCreature , pPacket->getX() , pPacket->getY() , pPacket->getDir());
	}

#endif
	
	__END_DEBUG_EX __END_CATCH
}
