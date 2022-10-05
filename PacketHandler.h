#pragma once
#include "Packet.h"

class PacketHandler
{
public:
	PacketHandler();
	~PacketHandler();
	template <class DataType>
	void Packing();
private:
	Packet packet;
};

