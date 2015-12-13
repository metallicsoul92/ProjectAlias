#include "../../Includes/PA_server.h"

server *createServer(short port, int sockfd){
    static server Serv;
    Serv.m_port = port;
    Serv.m_sockfd = sockfd;

#if defined(__linux__)
 /*   struct sockaddr_in serv_addr;
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr.sin_port = htons(port);

    Serv.m_socketAddress = serv_addr;
*/
#endif // Linux Definition of server
    return &Serv;
}

const char* ServerToString(server* serv){
     char* port;
     char* sockfd;
     char* socketaddr;

    sprintf(port, "%d",serv->m_port);
    sprintf(sockfd, "%d",serv->m_sockfd);
#if defined(__linux__)
//    sprintf(socketaddr, "%s" , inet_ntoa(serv->m_socketAddress.sin_addr));
#endif //Linux Definition of Server
    char* result;
    sprintf(result, "Address: %s \n Port: %s \n Socket File Descriptor: %s \n",socketaddr,port,sockfd);
    return &result;



}
