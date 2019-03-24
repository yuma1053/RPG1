#pragma once

class NumInput;
class StrInput;

class Manager{
public:
	Manager();
	~Manager();

	virtual int update();

private:
	NumInput *mNumInput;
	StrInput *mStrIntput;

};

