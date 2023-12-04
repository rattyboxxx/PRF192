#include <stdio.h>
#include <math.h>

int snt(int n)
{
	int i;
	for (i = 2; i <= (int) sqrt(n); i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}

// Bai 1
void sap1()
{
	int a[100], n;
	scanf("%d", &n);
	
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
		
	int j;
	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
			if (check(a[i]) && check(a[j]))
			{
				if (a[i] > a[j])
				{
					int tmp = a[i];
					a[i] = a[j];
					a[j] = tmp;
				}
			}
	}
}


// Bai 3
void sap3()
{
	int a[100], n;
	scanf("%d", &n);
	
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
		
	int j;
	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
			if (i % 2 == 0 && j % 2 == 0)
			{
				if (a[i] > a[j])
				{
					int tmp = a[i];
					a[i] = a[j];
					a[j] = tmp;
				}
			}
	}
	
	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
			if (i % 2 != 0 && j % 2 != 0)
			{
				if (a[i] < a[j])
				{
					int tmp = a[i];
					a[i] = a[j];
					a[j] = tmp;
				}
			}
	}
	
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}

// Bai 4
void sap4()
{
	int a[100], n;
	scanf("%d", &n);
	
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
		
	int j;
	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
			if (a[i] % 2 == 0 && a[j] % 2 == 0)
			{
				if (a[i] > a[j])
				{
					int tmp = a[i];
					a[i] = a[j];
					a[j] = tmp;
				}
			}
	}
	
	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
			if (a[i] % 2 != 0 && a[j] % 2 != 0)
			{
				if (a[i] < a[j])
				{
					int tmp = a[i];
					a[i] = a[j];
					a[j] = tmp;
				}
			}
	}
	
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}

int main()
{
	sap2();
	return 0;
}
