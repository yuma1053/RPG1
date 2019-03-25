#pragma once
#include "Manager.hpp"
#include "StrInputCUI.hpp"

#define BAR_SPACE 3

class MapEditor;
class ItemEditor;
class EnemyEditor;

class CUIManager : public Manager{
public:

	CUIManager() :
		Manager(nullptr, new StrInputCUI())
	{
		mLog = L"";
		mFont = Font(10);
	}

	static String& getLog() {
		return mLog;
	}

	static Font& getFont() {
		return mFont;
	}

	int update() override;

private:
	static String mLog;
	static Font mFont;
};