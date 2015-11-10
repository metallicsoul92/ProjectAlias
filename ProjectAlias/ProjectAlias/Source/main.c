#include "../Includes/Global.h"



int main(void)
{
	int a, b;
	a = 5;
	b = 9;
	printf("Before  the swaps: \n");
	printf("a = %d, b = %d",a,b);
	PA_ALGO_SwapXOR(&a, &b, sizeof(int));
	printf("After  the swaps: \n");
	printf("a = %d, b = %d", a, b);

	printf("%s", PA_UTIL_PlatformToString(PA_UTIL_detectPlatform()));

	float temp2 = 15.15f;
	float *temp2p;
	temp2p = &temp2;

	printf("Float passing through void passing through float :) %2.3f", *temp2p);

	
	getchar();
	

	return 0;
}

