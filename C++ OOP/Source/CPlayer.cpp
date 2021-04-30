#include "stdafx.h"
#include "Resource.h"
#include <mmsystem.h>
#include <ddraw.h>
#include "audio.h"
#include "gamelib.h"
#include "CPlayer.h"
namespace game_framework {

	CPlayer::CPlayer()
	{
		Initialize();
	}

	int CPlayer::GetX1()
	{
		return x;
	}

	int CPlayer::GetY1()
	{
		return y;
	}

	int CPlayer::GetX2()
	{
		return x + player.Width();
	}

	int CPlayer::GetY2()
	{
		return y + player.Height();
	}

	void CPlayer::Initialize()
	{
		x = 500;
		y = 620;
		g = 0;
		vy = 10;
		floorY = 620;
		jumpY = 180;
		jumpflag = false;
	}

	void CPlayer::LoadBitmap() {
		player.AddBitmap(IDB_C1, RGB(255, 255, 255));
		player.AddBitmap(IDB_C3, RGB(255, 255, 255));
		player.AddBitmap(IDB_C2, RGB(255, 255, 255));
	}

	void CPlayer::Jump() {
			if (jumpflag) {
				y -= (vy + g);	
				if (y <= floorY - jumpY)
					vy = -1 * vy;
				else if (y > floorY) {
					vy = -1 * vy;
					jumpflag = false;
					y = floorY;
				}
				if (y % 40 == 0)
					SwitchImage();
			}
	}

	void CPlayer::SetXY(int nx, int ny)
	{
		x = nx; y = ny;
	}

	void CPlayer::OnShow() {
		player.SetTopLeft(x, y);
		player.OnShow();
	}

	void CPlayer::SwitchImage() {
		player.SwitchImage();
	}

	void CPlayer::setFloorY(int y) {
		floorY = y;
	}
}