#pragma once
#include "Editor.h"

class MapEditor;
class ItemEditor;
class EnemyEditor;

class CUIEditor : public Editor{
public:
	CUIEditor();
	~CUIEditor();

	int update() override;

private:
};

