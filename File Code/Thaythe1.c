#include <stdio.h>
#include <math.h>

int check(int n)
{
	if (n < 2) return 0;
	int i;
	for (i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;
	
}

// thay so nguyen to thu 2 tu duoi len
void thay1()
{
	int n, a[100];
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
		
	int j = 0;
	i = n-1;
	
	while (j < 2 && i >= 0)
	{
		if (check(a[i])) j++;
		if (j == 2)
		{
			 a[i] *= a[i];
			 break;
		}
		i--;
	}
	
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}

//thay so cach 3 truoc snt thu 2 tu cuoi len
void thay2()
{
	int n, a[100];
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	int j = 0;
	i = n-1;
	
	while (j < 2 && i >= 0)
	{
		if (check(a[i])) j++;
		if (j == 2 && i - 3 >= 0)
		{
			a[i-3] *= a[i-3];
			break;
		}
		i--;
	}
	
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}

// them 99 vao chi so bat ki
void thay3()
{
	int n, a[100];
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	int k;
	scanf("%d", &k);
	
	for (i = n; i > k; i--)
		a[i] = a[i-1];
	
	a[k] = 99;
	
	for (i = 0; i <= n; i++)
		printf("%d ", a[i]);
	
}

// them 0 vao truoc cac so nguyen to
void thay4()
{
	int n, a[100];
	scanf("%d", &n);
	int i, j;
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	for (i = 0; i < n; i++)
	{
		if (check(a[i]))
		{
			for (j = n; j > i; j--)
				a[j] = a[j-1];
			a[i] = 0;
			i++;
			n++;
		}
	}
	
	for (j = 0; j < n; j++)
		printf("%d ", a[j]);
}

int main()
{	
//	thay1();
//	thay2();
	thay4();
	return 0;
}
