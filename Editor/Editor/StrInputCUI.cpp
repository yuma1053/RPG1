#include "StrInputCUI.hpp"
#include "CUIManager.hpp"


bool StrInputCUI::input(String &str) {

	//入力をうけつけstrに代入
	Input::GetCharsHelper(str);

	Font& font = CUIManager::getFont();
	String& log = CUIManager::getLog();

	if (CUIManager::getLog().length == 0) {
		font(str).draw(0, 0);
		Line(font(str).region().w + BAR_SPACE, 0, font(str).region().w + BAR_SPACE, font(str).region().h).draw();
	}
	else {
		font(str).draw(0, font(log).region().h);
		Line(font(str).region().w + BAR_SPACE, font(log).region().h, font(str).region().w + BAR_SPACE, font(log).region().h + font(str).region().h).draw();
	}

	if (str.length > 0 && str[str.length - 1] == L'\n') {
		str.erase(str.length - 1);
		return true;
	}
	else {
		return false;
	}
	

}