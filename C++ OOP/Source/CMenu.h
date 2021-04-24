namespace game_framework {

	class CMenu {
	public:
		CMenu();
		
		void Initialize();
		void LoadBitmap();
		void SwitchImage();
		void OnShow();

	protected:
		CAnimation menu;
	};
}