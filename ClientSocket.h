#pragma once
#include <WinSock2.h>
#include <iostream>
#include "Packet.h"

class ClientSocket
{
public:
	ClientSocket();
	~ClientSocket();
	void AcceptConnection(const SOCKET lSocket);	//accept connection
	bool IsFailToAccept();		//validate accept() result
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