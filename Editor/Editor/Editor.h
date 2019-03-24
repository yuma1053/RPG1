#pragma once

class NumInput;
class StrInput;

class Editor{
public:
	Editor();
	~Editor();

	virtual int update();

private:
	NumInput *mNumInput;
	StrInput *mStrIntput;

};

