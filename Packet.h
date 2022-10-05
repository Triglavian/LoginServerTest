#pragma once

#include "Protocol.h"
#include <iostream>
#include "PacketHandler.h"

class Packet 
{
public:		
	friend PacketHandler;	
	Packet();
	~Packet();
private:	
#define BUFSIZE 4096
	template <class DataType>
	void Packing(Protocol protocol, DataType& data);
	template <class DataType>
	void Unpacking();
	char buf[BUFSIZE];
};