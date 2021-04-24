namespace game_framework {

	class CGamemap {
	public:
		CGamemap();
		void LoadBitmap();
		void OnShow();
		void SetTopLeft(int, int);
		CMovingBitmap gametrack;

	protected:
		
		int map[4][5];
		const int X, Y;
		const int MW, MH;
	};
}