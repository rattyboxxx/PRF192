#include<stdio.h>

void hcn()
{
	int n, m;
	printf("Nhap n, m: ");
	scanf("%d", &n);
	scanf("%d", &m);
	
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (i == 0 || i == n-1 || j == 0 || j == m-1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}
	
void l()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i != 0 && i!= n-1 && j != 0) printf(" ");
			else printf("* ");
		}
		printf("\n");
	}	
}

void tg1()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j >= n-1-i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}	
}

void tg2()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}	
}

void tg3()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j >= i) printf("*");			
			else printf(	" ");
		}
		printf("\n");
	}	
}

void tg4()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = n-1; j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
	}	
}

void tg5()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= 2*n - 1; j++)
		{
			if (j > n-i && j < n+i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}	
}

void z1()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == 0 || i == n-1 || j == i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}		
}

void z2()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == 0 || i == n-1 || j == n-1-i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}		
}

void z3()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == 0 || i == n-1 || j == i || j == n-1-i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}		
}

void z4()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == 0 || i == n-1 || j == i || j == n-1-i || j == 0 || j == n-1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}		
}

int main()
{
	z4();
	return 0;
}
