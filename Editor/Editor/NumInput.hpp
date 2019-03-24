#pragma once
#include <Siv3D.hpp>

class NumInput{
public:
	NumInput();
	~NumInput();

	virtual String input() = 0;

};

