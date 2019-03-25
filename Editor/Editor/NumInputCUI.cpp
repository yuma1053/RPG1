#include "NumInputCUI.hpp"
#include "CUIManager.hpp"


bool NumInputCUI::input(String &str) {

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

	//エンターで入力が完了したか
	if (str.length > 0 && str[str.length - 1] == L'\n') {
		str = Format(Parse<int>(str));
		return true;
	}
	else {
		return false;
	}

}