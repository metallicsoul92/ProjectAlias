#ifndef PA_SERVER_H_
#define PA_SERVER_H_

#include "Global.h"



typedef struct Server{

#ifdef __linux__
   // struct sockaddr_in m_socketAddress;
#endif //Linux Defined

#ifdef __WIN32 || __WIN64
    SOCKET s;
#endif
	short m_port;
    int m_sockfd;
}server;

const char* ServerToString(server* serv);

server *createServer(short port, int sockfd);

#endif // PA_SERVER_H_
