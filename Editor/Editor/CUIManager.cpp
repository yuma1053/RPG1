#include "CUIManager.hpp"
#include <Siv3D.hpp>

Font CUIManager::mFont;
String CUIManager::mLog;

int CUIManager::update() {

	static String str;
	Graphics::SetBackground(Palette::Gray);

	if (mNumInput->input(str)) {
		addLog(str);
		str.clear();
	}

	mFont(mLog).draw();

	return 0;
}