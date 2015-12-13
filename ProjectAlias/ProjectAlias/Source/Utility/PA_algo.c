#include "../../Includes/PA_algo.h"





void PA_ALGO_swap(void* a, void *b,size_t size)
{
	assert(sizeof(a) == sizeof(b));

	void *temp = malloc(size);
	memcpy(temp, a, size);
	memcpy(a, b, size);
	memcpy(b, temp, size);
	free(temp);
}


void PA_ALGO_SwapXOR(int* a, int* b)
{
	if (a != b) {
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
	}
}
