#include <stdio.h>

int checksnt(int n)
{
	int i;
	if (n < 2) return 0;
	for (i = 2; i < sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;
}

int fib(int n)
{
	if (n==0 || n == 1) return 1;
	return (fib(n-1) + fib(n-2));
}

int main()
{
	int dem = 0, i = 1;
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	while (dem < n)
	{
		if (checksnt(fib(i)))
		{
			printf("%d ", fib(i));
			dem++;
		}
		i++;
	}
}
