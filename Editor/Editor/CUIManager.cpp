#include "CUIManager.hpp"
#include <Siv3D.hpp>

Font CUIManager::mFont;
String CUIManager::mLog;

int CUIManager::update() {
	static const Font font(10);
	static String str;
	Graphics::SetBackground(Palette::Gray);

	try {

		if (mStrInput->input(str)) {
			mLog += str;
			str.clear();
		}
		font(mLog).draw();
	}
	catch (...) {
		Println(L"ƒGƒ‰[‚ª”­¶‚µ‚Ü‚µ‚½");
	}

	return 0;
}