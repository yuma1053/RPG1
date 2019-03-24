#pragma once
#include "Manager.hpp"

class MapEditor;
class ItemEditor;
class EnemyEditor;

class CUIManager : public Manager{
public:
	CUIManager();
	~CUIManager();

	int update() override;

private:
};

