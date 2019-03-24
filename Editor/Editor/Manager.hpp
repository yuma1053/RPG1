#pragma once

class NumInput;
class StrInput;

class Manager{
public:


	virtual int update() = 0;

private:
	NumInput *mNumInput;
	StrInput *mStrIntput;

};

