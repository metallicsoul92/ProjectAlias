#ifndef PA_UTIL_H_
#define PA_UTIL_H_

/*Include all typedefines up here*/
typedef enum Platform{ OS_WIN, OS_LINUX, OS_MAC} platform;
typedef enum Endianess{ BIG_ENDIAN, LITTLE_ENDIAN} endianess;



/*Include all functions here*/
platform PA_UTIL_detectPlatform();
const char* PA_UTIL_PlatformToString(platform p);
endianess PA_UTIL_detectEndianness();
const char* PA_UTIL_EndianessToString(endianess e);



#endif PA_UTIL_H_