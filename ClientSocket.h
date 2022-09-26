#pragma once
#include <WinSock2.h>
#include <iostream>
#include <sstream>
#include "PacketHandler.h"

class ClientSocket
{
public:
	ClientSocket();
	~ClientSocket();
	void AcceptConnection(const SOCKET lSocket);	//accept connection
	bool IsFailToAccept();		//validate accept() result
	sockaddr_in* GetSockAddr();	//get client ip address
	int SendPacket(const int);			//send packet to client
	PacketHandler packetHandler;
private:
	int retval;
	SOCKET* socket;				//client socket
	sockaddr_in* clientAddr;	//cliend address
	int addrLen;				//client address object size
	void SetAddrLen();			//set client address object size to val	
};