#ifndef PA_UTIL_H_
#define PA_UTIL_H_

/*Include all typedefines up here*/
typedef enum Platform{ OS_WIN, OS_LINUX, OS_MAC} platform;
typedef enum Endianess{ BIG_END, LITTLE_END} endianess;
typedef enum Architecture{ arch_alpha_, arch_amd64_, arch_arm, arch_arm64,
arch_blackfin, arch_convex, arch_epiphany_ ,arch_hppa_, arch_x86,arch_ia64, arch_motorola_68k, arch_mips, arch_powerpc, arch_sparc,arch_sh,arch_systemZ} architecture;


/*Include all functions here*/
platform PA_UTIL_detectPlatform();
const char* PA_UTIL_PlatformToString(platform p);
endianess PA_UTIL_detectEndianness();
const char* PA_UTIL_EndianessToString(endianess e);
architecture PA_UTIL_detectArchitecture();
const char* PA_UTIL_ArchitectureToString(architecture a);


#endif PA_UTIL_H_
