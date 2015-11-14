#ifndef PA_SERVER_H_
#define PA_SERVER_H_

#include "Global.h"



typedef struct Server{

#if defined(__linux__)
    struct sockaddr_in m_socketAddress;
#endif //Linux Defined 

	short m_port;
    int m_sockfd;
}server;

const char* ServerToString(server* serv);

server *createServer(short port, int sockfd);

#endif // PA_SERVER_H_
