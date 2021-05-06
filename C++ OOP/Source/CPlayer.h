namespace game_framework {

	class CPlayer {
	public:
		CPlayer();
		int GetX1();
		int GetY1();
		int GetX2();
		int GetY2();
		void Initialize();
		void LoadBitmap();
		void Jump();
		void OnShow();
		void SwitchImage();
		void SetXY(int nx, int ny);
		void setFloorY(int);
		bool jumpflag;
		void SetX(int);

	protected:
		CAnimation player;
		int x;
		int y;
		int virtualx;
		int vy;
		int g;
		int floorY;
		int jumpY;
	};
}