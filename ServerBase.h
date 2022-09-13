#include "ServerSocket.h"
#include "ClientSocket.h"

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
	bool Initialization();	//server initialization
	bool IsWSAStartFail();	//validate initialization
	int result;				//event result
};