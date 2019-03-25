#pragma once

class NumInput;
class StrInput;

class Manager{
public:

	Manager(NumInput *numInput, StrInput *strInput) :
		mNumInput(numInput), mStrInput(strInput)
	{}

	virtual int update() = 0;

protected:
	NumInput *mNumInput;
	StrInput *mStrInput;

};