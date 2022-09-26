#include "MenuDatas.h"

MenuDatas::MenuDatas()
{
	menuDatas[0] = "LogIn Test\n1. Registration\n2. Log In\n";
}

MenuDatas::~MenuDatas()
{
}

std::string MenuDatas::GetMenuData(const MenuId index)
{
	return menuDatas[(int)index];
}
