#include "../../Includes/PA_device.h"

#include "../Includes/PA_util.h"
void initCurrDevice(struct PA_USRDVC *device){
    device->p = PA_UTIL_detectPlatform();
    device->e = PA_UTIL_detectEndianness();
    device->a = PA_UTIL_detectArchitecture();
}



