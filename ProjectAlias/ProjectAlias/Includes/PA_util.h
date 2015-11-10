#ifndef PA_UTIL_H_
#define PA_UTIL_H_

typedef enum Platform{ OS_WIN, OS_LINUX, OS_MAC} platform;

platform PA_UTIL_detectPlatform();
const char* PA_UTIL_PlatformToString(platform p);




#endif PA_UTIL_H_