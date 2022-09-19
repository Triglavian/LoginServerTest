#pragma once
#include <iostream>
#include <functional>
#include <array>
#include "MenuId.h"

class MenuPrinter
{
public:
	MenuPrinter();
	~MenuPrinter();
	std::array<std::function<void(MenuPrinter&)>, MMAX> MenuList;
private:
	void PrintMainMenu();
	void PrintRegistrationMenu();
	void PrintLoginMenu();
};

