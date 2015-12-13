#ifndef PA_ALGO_H_
#define  PA_ALGO_H_
#include "Global.h"
#if _WIN32
typedef unsigned int size_t;
#endif // __WIN32
typedef enum type{ typeINT = 0, typeFLOAT= 1, typeCHAR=2 } typet;

void PA_ALGO_swap(void* a, void *b, size_t size);
void PA_ALGO_SwapXOR(int *a,int *b);


#endif PA_ALGO_H_
