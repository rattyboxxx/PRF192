#include <stdio.h>

int check(int n)
{
	if (n < 2) return 0;
	int i;
	for (i = 2; i*i <= n; i++)
		if (n % i == 0) return 0;
	return 1;
}

void xoa1()
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
		
	for (i = 0; i < n; i++)
	{
		if (check(a[i]))
		{
			for (j = i; j < n-1; j++)
				a[j] = a[j+1];
			n -= n-1-i;
			break;			
		}
	}
	
	printf("\nDay sau khi xoa: \t");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}

void xoa2()
{
	int n, a[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	int i, j, k = 0;
	for (i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\nDay truoc khi xoa: \t");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
		
	for (i = 0; i < n; i++)
	{
		if ((a[i]) % 2 == 0) k++;
		if (k == 2)
		{	
			for (j = i+1; j < n-2; j++)
				if (j+2 < n) a[j] = a[j+2];
			n -= n-i-1;
			break;
		}
	}
	
	printf("\nDay sau khi xoa: \t");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}

// Xoa tat ca so nguyen to trong day
void xoa3()
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
		
	for (i = 0; i < n; i++)
	{
		if (check(a[i]))
		{
			for (j = i; j < n-1; j++)
				a[j] = a[j+1];
			n--;
			i--;
		}
	}
	
	printf("\nDay sau khi xoa: \t");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}

int main()
{
	xoa1();
	xoa2();
	xoa3();
	return 0;
}
