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

endianess PA_UTIL_detectEndianness()
{
	unsigned int x = 0x76543210;
	char *c = (char*)&x;
	if (*c == 0x10)
	{
		return LITTLE_ENDIAN;
	}
	else
	{
		return BIG_ENDIAN;
	}
}

const char* PA_UTIL_EndianessToString(endianess e)
{
	switch (e)
	{
	case BIG_ENDIAN:
		return "BIG_ENDIAN";
		break;
	case LITTLE_ENDIAN:
		return "LITTLE_ENDIAN";
		break;
	default:
		return "UNKNOWN ENDIAN!";
		break;
	}
} 