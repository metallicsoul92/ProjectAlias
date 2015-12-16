#ifndef PA_DEVICE_H_
#define PA_DEVICE_H_

#include "PA_util.h"
//User Device
typedef struct PA_USRDVC{
    platform p;
    endianess e;
    architecture a;
    const char* StringInfo;

}PA_USRDVC;

void initCurrDevice(PA_USRDVC *device);
void createToString(PA_USRDVC *device);


#endif //PA_DEVICE_H_
