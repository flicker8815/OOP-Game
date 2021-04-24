#include "stdafx.h"
#include "Resource.h"
#include <mmsystem.h>
#include <ddraw.h>
#include "audio.h"
#include "gamelib.h"
#include "CGamemap.h"

namespace game_framework {

	CGamemap::CGamemap() : X(20), Y(40), MW(120), MH(100)
	{
		int map_init[4][5] = { {0, 0, 1, 0, 0},
							   {0, 1, 2, 1, 0},
							   {1, 2, 1, 2, 1},
							   {2, 1, 2, 1, 2} };
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 5; j++) {
				map[i][j] = map_init[i][j];
			}
		}
	}

	void CGamemap::LoadBitmap() {
		gametrack.LoadBitmap(IDB_GAMETRACK);
	}	

	void CGamemap::OnShow() {
		gametrack.ShowBitmap();
	}

	void CGamemap::SetTopLeft(int x, int y) {
		gametrack.SetTopLeft(x, y);
	}
}