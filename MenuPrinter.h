#pragma once
#include <iostream>
<<<<<<< HEAD
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
=======

class MenuPrinter 
{
	enum menuIndex {

	};

>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25
};

