#ifndef PA_UTIL_H_
#define PA_UTIL_H_

#include <stdio.h>



/*Include all typedefines up here*/
typedef enum Platform{ OS_WIN, OS_LINUX, OS_MAC} platform;
typedef enum Endianess{ BIG_END, LITTLE_END} endianess;
typedef enum Architecture{ arch_alpha_, arch_amd64_, arch_arm, arch_arm64,
arch_blackfin, arch_convex, arch_epiphany_ ,arch_hppa_, arch_x86,arch_ia64, arch_motorola_68k, arch_mips, arch_powerpc, arch_sparc,arch_sh,arch_systemZ} architecture;

char *printFilePath();
char *printFileFP();

void createFile(char *filepath);
void writeToFile(char *filepath, void *data);
void writeTextToFile(char *filepath, const char *data);

/*Include all functions here*/
platform PA_UTIL_detectPlatform();
const char* PA_UTIL_PlatformToString(platform p);
endianess PA_UTIL_detectEndianness();
const char* PA_UTIL_EndianessToString(endianess e);
architecture PA_UTIL_detectArchitecture();
const char* PA_UTIL_ArchitectureToString(architecture a);

//Custom memory allocation functions and structures



struct memoryControlledBlock{
    int isAvailable;
    int size;
};

void cmalloc_init();
void *cmalloc(long numBytes);
void cfree(void *firstByte);




#endif PA_UTIL_H_
