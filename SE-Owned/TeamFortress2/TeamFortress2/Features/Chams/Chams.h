#pragma once
#include "../../SDK/SDK.h"

class CChams
{
private:
	IMaterial *m_pMatShaded, *m_pMatFlat, *m_pMatShiny, *m_pMatGlow, *m_pMatFlat2, *m_pMatScuffedRed, * m_pMatScuffedBlue, *m_pMatScuffed;
	std::map<CBaseEntity *, bool> m_DrawnEntities;

private:
	bool ShouldRun();
	void DrawModel(CBaseEntity *pEntity);

private:
	void RenderPlayers(CBaseEntity *pLocal, IMatRenderContext *pRenderContext);
	void RenderBuildings(CBaseEntity *pLocal, IMatRenderContext *pRenderContext);
	void RenderWorld(CBaseEntity *pLocal, IMatRenderContext *pRenderContext);

public:
	void Init();
	void Render();

	inline bool HasDrawn(CBaseEntity *pEntity) {
		return m_DrawnEntities.find(pEntity) != m_DrawnEntities.end();
	}

	inline bool IsChamsMaterial(IMaterial *pMat) {
		return (pMat == m_pMatShaded || pMat == m_pMatFlat || pMat == m_pMatShiny || pMat == m_pMatGlow || pMat == m_pMatFlat2);
	}

public:
	bool m_bHasSetStencil;
	bool m_bRendering;
};

inline CChams g_Chams;