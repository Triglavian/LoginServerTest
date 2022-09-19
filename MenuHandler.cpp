#include "MenuHandler.h"

MenuHandler::MenuHandler()
{
	menu = new MenuPrinter();
}

MenuHandler::~MenuHandler()
{
	if (menu != nullptr) delete menu;
}

void MenuHandler::PrintMenu(const int id)
{
	menu->MenuList.at(id);	//??
}
