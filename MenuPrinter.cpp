#include "MenuPrinter.h"

MenuPrinter::MenuPrinter()
{
	//MenuList = new std::array<std::function<void(MenuPrinter&)>, MMAX>();
	//MenuList.(&MenuPrinter::PrintMainMenu);
	//MenuList->push_back(&MenuPrinter::PrintRegistrationMenu);
	//MenuList->push_back(&MenuPrinter::PrintLoginMenu);
	MenuList[0] = &MenuPrinter::PrintMainMenu;
	MenuList[1] = &MenuPrinter::PrintRegistrationMenu;
	MenuList[2] = &MenuPrinter::PrintLoginMenu;
}

MenuPrinter::~MenuPrinter()
{
	
}

void MenuPrinter::PrintMainMenu()
{
	std::cout << "메인메뉴" << std::endl;	
}

void MenuPrinter::PrintRegistrationMenu()
{
	std::cout << "등록메뉴" << std::endl;
}

void MenuPrinter::PrintLoginMenu()
{
	std::cout << "로그인 메뉴" << std::endl;
}
