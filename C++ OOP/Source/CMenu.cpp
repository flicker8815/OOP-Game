#include "stdafx.h"
#include "Resource.h"
#include <mmsystem.h>
#include <ddraw.h>
#include "audio.h"
#include "gamelib.h"
#include "CMenu.h"
namespace game_framework {

	CMenu::CMenu()
	{
		Initialize();
	}

	void CMenu::Initialize()
	{
		
	}

	void CMenu::LoadBitmap() {
		menu.AddBitmap(IDB_MENU, RGB(255, 255, 255));
		menu.AddBitmap(IDB_MENULEVEL1, RGB(255, 255, 255));
		menu.AddBitmap(IDB_MENULEVEL2, RGB(255, 255, 255));
		menu.AddBitmap(IDB_MENULEVEL3, RGB(255, 255, 255));
		menu.AddBitmap(IDB_MENULEVEL4, RGB(255, 255, 255));
	}

	void CMenu::OnShow() {
		menu.SetTopLeft(0, 0);
		menu.OnShow();
	}

	void CMenu::SwitchImage() {
		menu.SwitchImage();
	}
}