#include "MenuHandler.h"

MenuHandler::MenuHandler()
{
	writePacket = nullptr;
}

MenuHandler::MenuHandler(std::function<void(std::string)> writePacketFunc)
{
	writePacket = writePacketFunc;
}

MenuHandler::~MenuHandler()
{

}

void MenuHandler::AddMenuToPacket(const MenuId index)
{
	writePacket(MenuDatas::GetMenuData(index));
}

