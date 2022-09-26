#include "ClientSocket.h"

ClientSocket::ClientSocket()
{
	socket = new SOCKET();
	clientAddr = new sockaddr_in();
	retval = 0;
	addrLen = 0;
}

ClientSocket::~ClientSocket()
{
	if (socket != nullptr) {
		closesocket(*socket);
		delete socket;
	}
	if (clientAddr != nullptr) delete clientAddr;
}

void ClientSocket::AcceptConnection(const SOCKET lSocket)	//validate accept() result
{
	SetAddrLen();
	*socket = accept(lSocket, (sockaddr*)clientAddr, &addrLen);	//linker error
}

bool ClientSocket::IsFailToAccept()
{
	return *socket == INVALID_SOCKET;
}

sockaddr_in* ClientSocket::GetSockAddr()	//get client ip address
{
	return clientAddr;
}

int ClientSocket::SendPacket(const int flag)	//send packet to client
{
	return send(*socket, packet.GetPacket().c_str(), packet.GetPacket().length(), flag);
}

void ClientSocket::SetAddrLen()	//set client address object size to val
{
	addrLen = sizeof(*clientAddr);
}
