#include "PacketHandler.h"

PacketHandler::PacketHandler()
{

}

PacketHandler::~PacketHandler()
{

}
<<<<<<< HEAD

//template<class Data>
//void PacketHandler::Packing(Protocol protocol, Data data)
//{
//	packet.Packing(protocol, data);
//}

template<class Data>
int PacketHandler::SendPacket(SOCKET socket, Protocol protocol, Data data)
{
	//Packing(protocol, data);
	char* ptr = packet.buf += sizeof(int);
	int packetSize = 0;
	int dataSize = sizeof(data);

	memcpy(ptr, &protocol, sizeof(protocol));
	ptr += sizeof(protocol);
	packetSize += sizeof(protocol);

	memcpy(ptr, &dataSize, sizeof(dataSize));
	ptr += sizeof(dataSize);
	packetSize += sizeof(dataSize);

	memcpy(ptr, &data, dataSize);
	packetSize += dataSize;

	ptr = packet.buf;
	memcpy(ptr, &packetSize, sizeof(packetSize));

	return send(socket, packet.buf, packet.packetSize, 0);
}

//int PacketHandler::SendPacket(SOCKET socket, Protocol protocol)
//{
//	Packing(protocol);
//	return send(socket, packet.buf, packet.packetSize, 0);
//}

//template<class Data>
//void PacketHandler::UnPacking(Protocol protocol, Data data)
//{
//	packet.Unpacking(protocol, data);
//}

template<class Data>
int PacketHandler::RecvPacket(SOCKET socket, Protocol& protocol, Data* data)
{
	int retval = 0;
	int packetSize = 0;
	retval = recv(socket, (char*)&packetSize, sizeof(int), MSG_WAITALL);
	if (retval == SOCKET_ERROR) {
		std::cout<< "recv() error" <<std::endl;
		exit(0);
	}
	retval = recv(socket, packet.buf, packetSize, MSG_WAITALL);
	if (retval == SOCKET_ERROR) {
		std::cout << "recv() error" << std::endl;
		exit(0);
	}
	char* ptr = packet.buf;

	memset(data, 0, sizeof(*data));
	memcpy(&protocol, ptr, sizeof(protocol));
	ptr += sizeof(protocol);

	int dataSize = 0;
	memcpy(&dataSize, ptr, sizeof(dataSize));
	ptr += sizeof(dataSize);

	memcpy(data, ptr, dataSize);
	return retval;
}

//int PacketHandler::RecvPacket(SOCKET socket, Protocol& protocol, int& data)
//{
//	int retval = 0;
//	int packetSize = 0;
//	retval = recv(socket, (char*)&packetSize, sizeof(int), MSG_WAITALL);
//	if (retval == SOCKET_ERROR) {
//		std::cout << "recv() error" << std::endl;
//		exit(0);
//	}
//	retval = recv(socket, packet.buf, packetSize, MSG_WAITALL);
//	if (retval == SOCKET_ERROR) {
//		std::cout << "recv() error" << std::endl;
//		exit(0);
//	}
//	char* ptr = packet.buf;
//	memset(&data, 0, sizeof(data));
//	memcpy(&protocol, ptr, sizeof(protocol));
//	ptr += sizeof(protocol);
//
//	int dataSize = 0;
//	memcpy(&dataSize, ptr, sizeof(dataSize));
//	ptr += sizeof(dataSize);
//
//	memcpy(&data, ptr, dataSize);
//	return retval;
//}
=======
>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25
