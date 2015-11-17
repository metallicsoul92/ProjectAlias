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

#if _WIN32

#endif // __WIN32
// user-created header files

#endif GLOBAL_H
