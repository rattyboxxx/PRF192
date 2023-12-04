#include <stdio.h>

	/* INSERTION LIST */

int main()
{
	int a[100], n;
	scanf("%d", &n);
	
	int i;
	for (i = 0; i < n; i++)
	scanf("%d", &a[i]);
	
	int t;
	for (t = 1; t < n; t++)
	{
		int j = t;
		while (a[j] < a[j-1] && j > 0)
		{
			j--;
		}
		
		int b = a[t];
		
		int k;
		for (k = t; k > j; k--)
		{
			a[k] = a[k-1];
		}

		a[j] = b;
		
		int z;
		for (z = 0; z < n; z++)
		{
			printf("%d ", a[t]);
		}
		
		printf("\n");
	}
	return 0;
}
