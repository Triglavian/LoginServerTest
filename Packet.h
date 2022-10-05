#pragma once

#include "Protocol.h"
#include <iostream>
<<<<<<< HEAD

class Packet
{
public:
	friend class PacketHandler;
	Packet();
	~Packet();
private:
#define BUFSIZE 4096
	//template <class Data>
	//void Packing(Protocol protocol, Data* data);
	//template <class Data>
	//void Unpacking(Protocol protocol, Data* data);
	char buf[BUFSIZE];
	int packetSize;
=======
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
>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25
};