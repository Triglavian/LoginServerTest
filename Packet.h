#pragma once
#include <string>

class Packet
{
//public:
//	std::string GetPacket();
//	std::string AddPacket(const std::string data);
//	void ClearPacket();
//	std::stringstream GetPacket();
//private:
protected:
//public:
	std::string buffer;	//packet buffer
	friend class PacketHandler;
	//std::stringstream packet;	//packet
};

