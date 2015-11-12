#include "../Includes/Global.h"



int main(void)
{
	int a, b;
	a = 5;
	b = 9;
	printf("Before  the swaps: \n");
	printf("a = %d, b = %d \n",a,b);
	PA_ALGO_SwapXOR(&a, &b, sizeof(int));
	printf("After  the swaps: \n");
	printf("a = %d, b = %d \n", a, b);

	printf("%s \n", PA_UTIL_PlatformToString(PA_UTIL_detectPlatform()));
	printf("%s \n", PA_UTIL_ArchitectureToString(PA_UTIL_detectArchitecture()));
    printf("Endianess %s \n",PA_UTIL_EndianessToString(PA_UTIL_detectEndianness()));

	float temp2 = 15.15f;
	float *temp2p;
	temp2p = &temp2;


	printf("Float passing through void passing through float :) %2.3f\n", *temp2p);


	getchar();


	return 0;
}

