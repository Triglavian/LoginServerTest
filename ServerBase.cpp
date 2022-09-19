#include "ServerBase.h"

ServerBase::ServerBase()
{
	result = WSAStartup(MAKEWORD(2, 2), &wsaData);	//linker error
	lSocket = new ServerSocket();
	cSocket = nullptr;
	ZeroMemory(addr, sizeof(addr));
	menuHandler = new MenuHandler();
}

ServerBase::~ServerBase()
{
	if (lSocket != nullptr) delete lSocket;
	if (cSocket != nullptr) delete cSocket;
	if (menuHandler != nullptr) delete menuHandler;
	WSACleanup();
}

void ServerBase::Run()	//run server
{
	if (!Initialization()) {
		std::cout << "Server Initialization Failed" << std::endl;
		return;
	}
	while (1) 
	{
		Connect();

		while (1) {

		}
		Disconnect();
	}
}

bool ServerBase::Initialization()	//server initialization
{
	result = WSAStartup(MAKEWORD(2, 2), &wsaData);	//linker error

	//WSA startup validation
	if (IsWSAStartFail())
	{
		std::cout << "WSAStartup() Error" << std::endl;
		return false;
	}

	//listen socket validation
	if (lSocket->IsInvalidSock())
	{
		std::cout << "socket() error" << std::endl;
		return false;
	}

	//socket binding state validation
	lSocket->BindSocket();
	if (lSocket->IsUnbindedSocket())
	{
		std::cout << "bind() error" << std::endl;
		return false;
	}

	//listen socket state validation
	lSocket->ListenToConnection();
	if (lSocket->IsWrongConnection())
	{
		std::cout << "listen() error" << std::endl;
		return false;
	}
	return true;
}

bool ServerBase::IsWSAStartFail()	//validate initialization
{
	return result != 0;
}

void ServerBase::Connect()
{
	cSocket = new ClientSocket();
	cSocket->AcceptConnection(lSocket->GetSocket());
	if (cSocket->IsFailToAccept())
	{
		std::cout << "accept() error" << std::endl;
		return;
	}
	inet_ntop(AF_INET, &cSocket->GetSockAddr()->sin_addr, addr, sizeof(addr));
	std::cout << "Connected : ip = " << addr << ", port = " << ntohs(cSocket->GetSockAddr()->sin_port) << std::endl;
}

void ServerBase::Disconnect()
{
	std::cout<<"Disconnected : ip = " << addr << ", port = " << ntohs(cSocket->GetSockAddr()->sin_port) << std::endl;
	delete cSocket;
	//cSocket->~ClientSocket();	//call destructor to destroy object without release memory
}
