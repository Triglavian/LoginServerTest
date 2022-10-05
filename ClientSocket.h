#pragma once
#include <WinSock2.h>
#include <iostream>
<<<<<<< HEAD
#include <sstream>
#include "PacketHandler.h"
#include "MenuId.h"
=======
#include "Packet.h"
>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25

class ClientSocket
{
public:
	ClientSocket();
	~ClientSocket();
	void AcceptConnection(const SOCKET lSocket);	//accept connection
	bool IsFailToAccept();		//validate accept() result
<<<<<<< HEAD
	sockaddr_in* GetSockAddr();	//get client ip address
	int SendIntPacket();
	int SendAccPacket();
	//template <class Data>
	int RecvIntPacket();
	int RecvAccPacket();
	void ProtocolSwitch();
private:
	int retval;
	SOCKET* socket;				//client qsocket
	sockaddr_in* clientAddr;	//cliend address
	int addrLen;				//client address object size
	void SetAddrLen();			//set client address object size to val	
	PacketHandler packetHandler;
	Protocol protocol;
	AccountForm acc;
	int selection;
};
=======
	sockaddr_in GetSockAddr();	//get client ip address
	template <class DataType>
	void Packing(DataType data);
	int SendPacket();			//send packet to client
private:
	SOCKET* so`cket;				//client socket
	sockaddr_in* clientAddr;	//cliend address
	int addrLen;				//client address object size
	void SetAddrLen();			//set client address object size to val
	Packet packet;
};
>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25
