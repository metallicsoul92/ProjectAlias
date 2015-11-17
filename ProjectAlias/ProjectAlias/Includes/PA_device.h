#ifndef PA_DEVICE_H_
#define PA_DEVICE_H_

#include "../Includes/PA_util.h"
//User Device
typedef struct USRDVC{
    platform p;
    endianess e;
    architecture a;
    const char* StringInfo;

}usrdvc;

void initCurrentDevice(usrdvc *device);
void createToString(usrdvc *device);


#endif //PA_DEVICE_H_
