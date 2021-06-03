#include "stdafx.h"
#include "Resource.h"
#include <mmsystem.h>
#include <ddraw.h>
#include "audio.h"
#include "gamelib.h"
#include "CGamemap.h"

namespace game_framework {

	CGamemap::CGamemap(int n) : mapnum(n)
	{

	}
	void CGamemap::LoadBitmap() {
		if(mapnum == 1)
			gametrack.LoadBitmap(IDB_TRACK_1);
	}	

	void CGamemap::OnShow() {
		gametrack.ShowBitmap();
	}

	void CGamemap::SetTopLeft(int x, int y) {
		gametrack.SetTopLeft(x, y);
	}
}