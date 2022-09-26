#pragma once
#include "Packet.h" 

class PacketHandler : public Packet
{
public:
	Packet GetPacket();
	void AddPacket(const std::string data);
	void ClearPacket();
private:
	Packet packet;
};

