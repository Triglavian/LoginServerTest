#include "ClientSocket.h"

ClientSocket::ClientSocket()
{
	socket = new SOCKET();
	clientAddr = new sockaddr_in();
	addrLen = 0;
}

ClientSocket::~ClientSocket()
{
	if (socket != nullptr) delete socket;
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

sockaddr_in ClientSocket::GetSockAddr()	//get client ip address
{
	return *clientAddr;
}

template<typename DATA>
void ClientSocket::AddDataToPacket(DATA data)
{
	//packetBuffer.append(typename)
}

int ClientSocket::SendPacket()	//send packet to client
{
	return send(*socket, packet.str().c_str(), packet.str().length(), 0);
}

void ClientSocket::SetAddrLen()	//set client address object size to val
{
	addrLen = sizeof(*clientAddr);
}
