#include "ServerSocket.h"
#include "ClientSocket.h"

<<<<<<< HEAD
#include <WS2tcpip.h>

#include "MenuHandler.h"

=======
>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25
class ServerBase
{
public:
	ServerBase();
	~ServerBase();
	void Run();				//run server
private:
	WSADATA wsaData;		//window socket api
	ServerSocket* lSocket;	//server listen socket
	ClientSocket* cSocket;	//client connection socket
<<<<<<< HEAD
	
	bool Initialization();	//server initialization
	bool IsWSAStartFail();	//validate initialization
	int result;				//event result	
	char addr[INET_ADDRSTRLEN];

	void Connect();
	int retval;
	void Disconnect();
	//MenuHandler* menuHandler;
=======
	bool Initialization();	//server initialization
	bool IsWSAStartFail();	//validate initialization
	int result;				//event result
>>>>>>> 604e64e0f4b14d00cb05db5644417e816f477b25
};