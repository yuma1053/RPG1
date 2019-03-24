#pragma once
#include <vector>
class Event;

class Map
{
public:
	Map();
	~Map();

	
	int& getSizex() {
		return mSizex;
	}

	int& getSizey() {
		return mSizey;
	}

	int**& getChip() {
		return mChip;
	}

	int*& getAlphaChip() {
		return mAlphaChip;
	}

private:
	int mSizex, mSizey;
	int **mChip;
	int *mAlphaChip;

	std::vector<Event> ev;
};

