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
		return LITTLE_END;
	}
	else
	{
		return BIG_END;
	}
}

const char* PA_UTIL_EndianessToString(endianess e)
{
	switch (e)
	{
	case BIG_END:
		return "BIG_ENDIAN";
		break;
	case LITTLE_END:
		return "LITTLE_ENDIAN";
		break;
	default:
		return "UNKNOWN ENDIAN!";
		break;
	}
}

architecture PA_UTIL_detectArchitecture(){
#if defined(__alpha__)
	return arch_alpha_;
#endif
#if defined(__amd64) || defined(__amd64__) || defined(__x86_64__) || defined(__x86_64)
	return arch_amd64_;
#endif
#if defined(__arm__)
	return arch_arm;
#endif
#if defined(__aarch64__)
	return arch_arm64;
#endif
#if defined(_bfin) || defined(__BFIN__)
	return arch_blackfin;
#endif
#if defined(__convex__)
	return arch_convex;
#endif
#if defined(__epiphany__)
	return arch_epiphany_;
#endif
#if defined(__hppa__)
	return arch_hppa_;
#endif
#if defined(__i386) || defined(__i386) || defined(__i386__) || defined(__i486__)|| defined (__i586__) || defined(__i686__) || defined(_X86_)
	return arch_x86;
#endif
#if defined(__ia64__) || defined(_IA64) || defined (__IA64__)
	return arch_ia64;
#endif
#if defined(__mk68k__)
	return arch_motorola_68k;
#endif
#if defined(__powerpc) || defined(__powerpc__) || defined(__powerpc64__) || defined(__POWERPC__)|| defined (__ppc__) || defined(__ppc64__) || defined(_PPC_) || defined(__PPC64__) || defined(_ARCH_PPC_) || defined(__ARCH_PPC64__)
	return arch_powerpc;
#endif
#if defined(mips) || defined (__mips__)
	return arch_mips;
#endif
#if defined(__sparc__)
	return arch_sparc;
#endif
#if defined(__sh__)
	return arch_sh;
#endif
#if defined(__s390__) || defined(__s390x__)
	return arch_systemZ;
#endif

}
const char* PA_UTIL_ArchitectureToString(architecture a){
switch(a){
 case arch_alpha_:
 return "arch_alpha";
 break;
 case arch_amd64_:
 return "AMD64";
 break;
 case arch_arm:
 return "ARM";
 break;
 case arch_arm64:
 return "ARM64";
 break;
 case arch_blackfin:
 return "arch_blackfin";
 break;
 case arch_epiphany_:
 return "arch_epiphany";
 break;
 case arch_hppa_:
 return"arch_hppa";
 break;
 case arch_x86:
 return "x86";
 break;
 case arch_ia64:
 return "arch_ia64";
 break;
 case arch_motorola_68k:
 return "arch_motorola_86k";
 break;
 case arch_mips:
 return "arch_mips";
 break;
 case arch_powerpc:
 return "powerpc";
 break;
 case arch_sparc:
 return "arch_sparc";
 break;
 case arch_sh:
 return "arch_sh";
 break;
case arch_systemZ:
return "arch_systemZ";
break;
default:
return "unknown Architecture";
break;

}
}

