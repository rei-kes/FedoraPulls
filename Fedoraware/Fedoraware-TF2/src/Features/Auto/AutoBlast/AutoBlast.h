#pragma once
#include "../AutoGlobal/AutoGlobal.h"

class CAutoAirblast
{
public:
	void Run(CBaseEntity* pLocal, CBaseCombatWeapon* pWeapon, CUserCmd* pCmd);
};

ADD_FEATURE(CAutoAirblast, AutoAirblast)