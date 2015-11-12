#include "../../Includes/PA_device.h"

void initCurrentDevice(usrdvc *device){
    device->p = PA_UTIL_detectPlatform();
    device->e = PA_UTIL_detectEndianness();
    device->a = PA_UTIL_detectArchitecture();
    createToString(&device);
}

void createToString(usrdvc *device){
    sprintf(device->StringInfo,"Platform: %s \n Endianess: %s \n Architecture: %s \n",PA_UTIL_PlatformToString(device->p),PA_UTIL_EndianessToString(device->e),PA_UTIL_ArchitectureToString(device->a));
}

