#pragma once
#include <WinSock2.h>
#include "ClientSocket.h"

class ServerSocket
{
public:
	ServerSocket();
<<<<<<< HEAD
	~ServerSocket();
=======
>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25
	bool IsInvalidSock();
	bool IsUnbindedSocket();
	bool IsWrongConnection();
	void BindSocket();
	void ListenToConnection();
	SOCKET GetSocket();
private:
	sockaddr_in* serverAddr;
	sockaddr_in* clientAddr;
	SOCKET* listenSocket;
	int cAddrSize;
	int result;
	//void AcceptConnection(ClientSocket& clientSocket);
};

