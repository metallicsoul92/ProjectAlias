#ifndef PA_ALGO_H_
#define  PA_ALGO_H_

typedef unsigned int size_t;
typedef enum type{ typeINT = 0, typeFLOAT= 1, typeCHAR=2 } typet;

void PA_ALGO_swap(void* a, void *b, size_t size);
void PA_ALGO_QuickSort(void* array, int n, typet t);



#endif PA_ALGO_H_