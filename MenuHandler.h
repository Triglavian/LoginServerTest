#pragma once
#include "MenuPrinter.h"

class MenuHandler
{
public:
	MenuHandler();
	~MenuHandler();
	void PrintMenu(const int id);
private:
	MenuPrinter* menu;
};

