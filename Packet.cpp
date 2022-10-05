#include "Packet.h"

Packet::Packet()
{
	memset(buf, NULL, BUFSIZE);
}

Packet::~Packet()
{

}

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