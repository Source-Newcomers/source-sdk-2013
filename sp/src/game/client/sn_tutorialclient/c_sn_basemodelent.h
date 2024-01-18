//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: Example Client Side Entity that For Source Engine (SDK)
// Author: Mikael K. Aboagye (Source Newcomers)
// $NoKeywords: $
//=============================================================================//
#pragma once
#include "cbase.h"
#include "tier1/tier1.h"

class CSNBaseModelEnt : public CBaseAnimating
{
public:
	DECLARE_CLASS(CSNBaseModelEnt, CBaseAnimating);
	DECLARE_DATADESC();

	explicit CSNBaseModelEnt(const char* modelpath)
	{
		if (modelpath != nullptr)
			sn_mbmodelpath = modelpath;
	}

	void InputToggle(inputdata_t& in_inputdata);
	virtual void OnInputReact() = 0;

protected:
	void SN_PrecacheModel();
	/// <summary>
	/// Set as default, if we cant find the requested model, then we just default to error, just like the engine does for us.
	/// </summary>
	const char* sn_mbmodelpath = "mdl/error.mdl";
	bool active_ent = false;
};
