#include "ClientSocket.h"

ClientSocket::ClientSocket()
{
	socket = new SOCKET();
	clientAddr = new sockaddr_in();
<<<<<<< HEAD
	retval = 0;
	addrLen = 0;
	selection = 0;
=======
	addrLen = 0;
>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25
}

ClientSocket::~ClientSocket()
{
<<<<<<< HEAD
	if (socket != nullptr) {
		closesocket(*socket);
		delete socket;
	}
=======
	if (socket != nullptr) delete socket;
>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25
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

<<<<<<< HEAD
sockaddr_in* ClientSocket::GetSockAddr()	//get client ip address
{
	return clientAddr;
}	

int ClientSocket::SendIntPacket()
{
	//return packetHandler.SendPacket(*socket, protocol, selection);
}

int ClientSocket::SendAccPacket()
{
	//return packetHandler.SendPacket(*socket, protocol, acc);
}

//template<class Data>
int ClientSocket::RecvIntPacket()
{
	int retval = packetHandler.RecvPacket(*socket, protocol, &selection);
	return retval;
}

int ClientSocket::RecvAccPacket()
{
	int retval = packetHandler.RecvPacket(*socket, protocol, &acc);
	return retval;
}

void ClientSocket::ProtocolSwitch()
{
	switch (selection) {
		case MMAIN:
			protocol = BACK;
			selection = -1;
			SendIntPacket();
			break;
		case MREG:
			protocol = REG;
			selection = -1;
			SendIntPacket();
			RecvAccPacket();
			SendIntPacket();
			break;
		case MLOG_IN:
			protocol = LIN;
			break;
		case MLOG_OUT:
			protocol = LOUT;
			break;
		case MEXIT:
			protocol = EXT;
			break;
	}
}
=======
sockaddr_in ClientSocket::GetSockAddr()	//get client ip address
{
	return *clientAddr;
}

template<class DataType>
void ClientSocket::Packing(DataType data)
{
	
}

int ClientSocket::SendPacket()	//send packet to client
{
	return send(*socket, packet.str().c_str(), packet.str().length(), 0);
}

>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25
void ClientSocket::SetAddrLen()	//set client address object size to val
{
	addrLen = sizeof(*clientAddr);
}
