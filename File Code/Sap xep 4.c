#include <stdio.h>
#include <math.h>

int check(int n)
{
	if (n < 2) return 0;
	int i;
	for (i = 2; i <= (int) sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;
}

// thay the snt trong mang bang 99
void thaythe()
{
	int a[100], n;
	
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	for (i = 0; i < n; i++)
		if (check(a[i])) a[i] = 99;
		
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}

// Chi sap xep cac so chan trong mang
void sapxep()
{
	int a[100], b[100], n;
	
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		b[i] = 1;
	}
		
	int k = 0;
	
	for (i = n-1; i >= 0; i--)
		if (a[i] % 2 == 0)
		{
			b[i] = a[i];
			k++;
			if (k == 3) break;
		}
		
	int j;
	for (i = 0; i < n-1; i++)
		for (j = i+1; j < n; j++)
		{
			if (b[i] != 1 && b[j] != 1 && b[i] > b[j])
			{
				int tmp = b[j];
				b[j] = b[i];
				b[i] = tmp;
			}
		}
	
	for (i = 0; i < n; i++)
	{
		if (b[i] != 1) a[i] = b[i];
		printf("%d ", a[i]);
	}		
}

void daonguoc()
{
	int a[100], n;
	
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	int j = 0, tmp1, tmp2, tmp3, tmp4;
	i = 0;
	
	while (j < 3 && i < n)
	{
		if (check(a[i]))
		{
			j++;
			if (j == 1)
			{
				tmp1 = i;
				tmp2 = a[i];
			}
			else if (j == 3)
			{
				tmp3 = i;
				tmp4 = a[i];
			}
		}
		i++;
	}
	
	if (j == 3)
	{
		a[tmp1] = tmp4;
		a[tmp3] = tmp2;
	}
	
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}		
}

int main()
{
	/* Bo // ben duoi de su dung ham minh can nhe */
	sapxep();
//	thaythe();
//	daonguoc();
	return 0;
}
