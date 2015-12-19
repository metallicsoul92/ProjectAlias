#ifndef GLOBAL_H_
#define GLOBAL_H_


// main header files
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include <memory.h>


// Networking header files for linux
#if __linux__
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <ifaddrs.h>
#include <unistd.h>
#include <arpa/inet.h>
#endif // __linux__

#if _WIN32 || __WIN64
 #include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
 #pragma comment(lib,"ws2_32.lib") //Winsock Library
#endif // __WIN32
// user-created header files

typedef void* voidptr;
typedef int* intptr;
typedef char* charptr;
typedef void(*functptr)(void);
typedef unsigned int uint;
#endif GLOBAL_H
