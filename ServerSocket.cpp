#include "ServerSocket.h"

ServerSocket::ServerSocket()
{
	serverAddr = new sockaddr_in();
	clientAddr = new sockaddr_in();
<<<<<<< HEAD
	listenSocket = new SOCKET();
=======
	listenSocket = new SOCKET;
>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25
	cAddrSize = 0;
	result = 0;
}

<<<<<<< HEAD
ServerSocket::~ServerSocket()
{
	if (serverAddr != nullptr) delete serverAddr;
	if (clientAddr != nullptr) delete clientAddr;
	if (listenSocket != nullptr) {
		closesocket(*listenSocket);
		delete listenSocket;
	}
}

=======
>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25
bool ServerSocket::IsInvalidSock()
{
	*listenSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);	//linker error
	//memset(&serverAddr, 0, sizeof(serverAddr));
	serverAddr->sin_family = AF_INET;
	serverAddr->sin_port = htons(9000);	//linker error
	serverAddr->sin_addr.s_addr = htonl(INADDR_ANY);	//linker error
	cAddrSize = sizeof(serverAddr);
	return *listenSocket == INVALID_SOCKET;
}

bool ServerSocket::IsUnbindedSocket()
{
	return result == SOCKET_ERROR;
}

bool ServerSocket::IsWrongConnection()
{
	return result == SOCKET_ERROR;
}

void ServerSocket::BindSocket() {
	result = bind(*listenSocket, (sockaddr*)serverAddr, sizeof(*serverAddr));	//llinker error
}

void ServerSocket::ListenToConnection()
{
	result = listen(*listenSocket, SOMAXCONN);	//linker error
}

SOCKET ServerSocket::GetSocket()
{
	return *listenSocket;
}

//void ServerSocket::AcceptConnection(ClientSocket& clientSocket)
//{
//	//���� �������� ���� ������� Ŭ�� ������ �޾ƿͼ� ������ �� �ֵ��� �ۼ�
//	clientSocket.AcceptConnection(*listenSocket);
//}
