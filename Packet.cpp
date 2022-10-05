#include "Packet.h"

Packet::Packet()
{
	memset(buf, NULL, BUFSIZE);
<<<<<<< HEAD
	packetSize = 0;
=======
>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25
}

Packet::~Packet()
{

}

<<<<<<< HEAD
//template<class Data>
//void Packet::Packing(Protocol protocol, Data* data)
//{
//	char* ptr = buf + sizeof(int);
//	int dataSize += sizeof(DataType);
//	packetSize = 0;
//	packetSize += sizeof(int);
//
//	memcpy(ptr, &protocol, sizeof(protocol));
//	packetSize += sizeof(protocol);
//	ptr += sizeof(protocol);
//
//	memcpy(ptr, &dataSize, sizeof(dataSize));
//	ptr += sizeof(dataSize);
//	packetSize += sizeof(dataSize);
//
//	memcpy(ptr, &data, sizeof(data))
//	packetSize += dataSize;
//	ptr = buf;
//
//	memcpy(ptr, (char*)&packetSize, sizeof(int));
//}
//
//template<class Data>
//void Packet::Unpacking(Protocol protocol, Data* data)
//{
//
//}
=======
template<class DataType>
void Packet::Packing(Protocol protocol, DataType& data)
{
	char* ptr = buf + sizeof(int);
	int dataSize += sizeof(DataType);
	int packetSize += sizeof(int);

	memset(ptr, (char*)&protocol, sizeof(int));
	packetSize += sizeof(int);
	ptr += sizeof(int);

	memset(buf, (char*)&data, dataSize);
	ptr += dataSize;
	packetSize += dataSize;
	ptr = buf;

	memset(ptr, (char*)&packetSize, sizeof(int));
}
>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25
