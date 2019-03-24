
# include <Siv3D.hpp>
#include "CUIManager.hpp"

void Main()
{
	CUIManager cuiManager;

	while (System::Update()){
		cuiManager.update();
	}
}
