#pragma once
#include <WinSock2.h>
#include <iostream>
#include <sstream>
class ClientSocket
{
public:
	ClientSocket();
	~ClientSocket();
	void AcceptConnection(const SOCKET lSocket);	//accept connection
	bool IsFailToAccept();		//validate accept() result
	sockaddr_in GetSockAddr();	//get client ip address
	template <typename DATA>
	void AddDataToPacket(DATA data);
	int SendPacket();			//send packet to client
private:
	SOCKET* socket;				//client socket
	sockaddr_in* clientAddr;	//cliend address
	int addrLen;				//client address object size
	void SetAddrLen();			//set client address object size to val
	std::string packetBuffer;	//packet buffer
	std::stringstream packet;	//packet
};