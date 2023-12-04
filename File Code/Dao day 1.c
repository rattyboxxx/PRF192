#include<stdio.h>


int check(int k, int n)
{
	while (k > n-1) k = k-n;
	return k;
}

// Dao day theo vong tron
// VD: 1 2 3 4 5, tien 3 lan thanh 3 4 5 1 2

int main()
{
	int n, a[100], b[100];
	scanf("%d", &n); // so luong phan tu
	fflush(stdin);
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	
	int k; // so buoc tien
	scanf("%d", &k);
	
	for (i = 0; i < n; i++)
	{
		b[check(i+k, n)] = a[check(i,n)];
	}
	
	for (i = 0; i < n; i++)
	{
		printf("%d ", b[i]);
	}

	return 0;
}
