#pragma once
#include "Packet.h"
<<<<<<< HEAD
#include <winsock2.h>
#include "AccountForm.h"
=======
>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25

class PacketHandler
{
public:
	PacketHandler();
	~PacketHandler();
<<<<<<< HEAD
	//template <class Data>
	//void Packing(Protocol protocol, Data data);
	template <class Data>
	int SendPacket(SOCKET socket, Protocol protocol, Data data);
	//template <class Data>
	//void UnPacking(Protocol protocol, Data data);
	template <class Data>
	int RecvPacket(SOCKET socket, Protocol& protocol, Data* data);
	//int RecvPacket(SOCKET socket, Protocol& protocol, int& data);
=======
	template <class DataType>
	void Packing();
>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25
private:
	Packet packet;
};

<<<<<<< HEAD

=======
>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25
