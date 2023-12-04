#include <stdio.h>

int check(int n)
{
	if (n < 2) return 0;
	int i;
	for (i = 2; i*i <= n; i++)
		if (n % i == 0) return 0;\
		return 1;
}

void no1()
{
	int n, a[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	int i,j;
	for (i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	printf("Day truoc khi xoa: \t");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
		
	int k = 0;
	
	for (i = 0; i < n; i++)
	{
		if (check(a[i]))
		{
			for (j = i; j < n-1; j++)
				a[j] = a[j+1];
			n--;
			i--;
			k++;
		}
		if (k == 3) break;
	}
	
	printf("\nDay sau khi xoa: \t");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}

void no2()
{
	int n, a[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	int i,j;
	for (i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	printf("Day truoc khi xoa: \t");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
		
	if (n >= 6)
	{
		for (j = 5; j < n-1; j++)
				a[j] = a[j+1];
		n--;
	}

	printf("\nDay sau khi xoa: \t");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}

void no3()
{
	int n, a[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	int i,j = 0;
	for (i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	printf("Day truoc khi xoa: \t");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
		
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0) j++;
		if (j == 3)
		{
			a[i] = 100;
			break;
		}
	}
	
	printf("\nDay sau khi xoa: \t");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}

int main()
{
//	no1();
//	no2();
//	no3();
	return 0;
}
