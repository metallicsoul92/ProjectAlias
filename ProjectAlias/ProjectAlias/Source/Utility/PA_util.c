#include "../../Includes/PA_util.h"

platform PA_UTIL_detectPlatform()
{
#if defined(_WIN32) || defined(_WIN64)
	return OS_WIN;
#endif
#if defined(__APPLE__) || defined(__MACH__)
	return OS_MAC;
#endif
#if defined(__linux__) 
	return OS_LINUX;
#endif
}

const char *PA_UTIL_PlatformToString(platform p)
{
	switch (p){
	case OS_WIN:
		return "OS_WIN";

	case OS_MAC:
		return "OS_MAC";

	case OS_LINUX:
		return "OS_LINUX";

	default:
		return "Unknown OS Error";

	}



}