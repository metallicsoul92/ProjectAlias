#include "../../Includes/PA_algo.h"
#include "../../Includes/Global.h"

void PA_ALGO_swap(void* a, void *b,size_t size)
{
	assert(sizeof(a) == sizeof(b));

	void *temp = malloc(size);
	memcpy(temp, a, size);
	memcpy(a, b, size);
	memcpy(b, temp, size); 
	free(temp);
}

void PA_ALGO_QuickSort(void* arr, int n, typet ty)
{
	int i, j, p, t;
	float ft ,fp;
	char ct;
	int ity = ty;

int *a = (int*)arr;
	switch (ity)
	{
	case 0:
		
		
		if (n < 2)
			return;
		p = a[n / 2];
		for (i = 0, j = n - 1;; i++, j--) {
			while (a[i] < p)
				i++;
			while (p < a[j])
				j--;
			if (i >= j)
				break;
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
		PA_ALGO_QuickSort(a, i,ty);
		PA_ALGO_QuickSort(a + i, n - i,ty);
		free(a);
		break;
	case 1:
		float *fa = (float*)arr;
		if (n < 2)
			return;
		fp = fa[n / 2];
		for (i = 0, j = n - 1;; i++, j--) {
			while (fa[i] < fp)
				i++;
			while (fp < fa[j])
				j--;
			if (i >= j)
				break;
			ft = fa[i];
			fa[i] = fa[j];
			fa[j] = ft;
		}
		PA_ALGO_QuickSort(fa, i, ty);
		PA_ALGO_QuickSort(fa + i, n - i, ty);
		free(fa);
		break;
	case 2:
		char *ca = (char*)arr;

		if (n < 2)
			return;
		p = ca[n / 2];
		for (i = 0, j = n - 1;; i++, j--) {
			while (ca[i] < p)
				i++;
			while (p < ca[j])
				j--;
			if (i >= j)
				break;
			ct = ca[i];
			ca[i] = ca[j];
			ca[j] = ct;
		}
		PA_ALGO_QuickSort(ca, i, ty);
		PA_ALGO_QuickSort(ca + i, n - i, ty);
		free(ca);
		break;
	default:
		//
		//TODO: MAKE A LOGGING FUNCTION MAYBE?!
		//
		break;
	}
}


