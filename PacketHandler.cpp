#include "PacketHandler.h"

Packet PacketHandler::GetPacket()
{
	return packet;
}

void PacketHandler::AddPacket(const std::string data)
{
	packet.buffer += data;	//protected member error?? 
}

void PacketHandler::ClearPacket()
{
	packet.buffer.clear();
}
