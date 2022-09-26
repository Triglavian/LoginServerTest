#pragma once
#include <string>
#include <functional>
#include "MenuId.h"
#include "MenuDatas.h"

class MenuHandler
{
public:
	MenuHandler();
	MenuHandler(std::function<void(std::string)> writePacketFunc);
	~MenuHandler();	
	void AddMenuToPacket(const MenuId);
private:
	std::function<void(std::string)> writePacket;
};