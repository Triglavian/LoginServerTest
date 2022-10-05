#pragma once
#include <string>
#include <Array>
#include "MenuId.h"

static class MenuDatas
{
public:
	MenuDatas();
	~MenuDatas();
	static std::string GetMenuData(const MenuId);
private:
	static std::array<std::string, MMAX> menuDatas;
};

