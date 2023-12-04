#include <stdio.h>
#include <string.h>

// Sap xep cac tu trong chuoi theo thu tu
void baikho()
{
	int i; char a[20][10], temp[100];
	printf("Nhap chuoi: ");
	gets(temp);
	
	int j = 0, k = 0;
	for (i = 0; i < strlen(temp); i++)
	{
		if (temp[i] != ' ')
		{
			a[j][k] = temp[i];
			k++;
		}
		else
		{
			j++;
			k = 0;
		}
	}
	
	for (i = 0; i < j; i++)
	{
		for (k = i+1; k <= j; k++)
		{
			if (strlen(a[i]) > strlen(a[k]))
			{
				strcpy(temp, a[i]);
				strcpy(a[i], a[k]);
				strcpy(a[k], temp);
			}
			else if (strlen(a[i]) == strlen(a[k]) && strcmp(a[i], a[k]) > 0)
			{
				strcpy(temp, a[i]);
				strcpy(a[i], a[k]);
				strcpy(a[k], temp);
			}
		}
	}
	
	for (i = 0; i <= j; i++)
	printf("%s ", a[i]);
}

// Sap xep cac tu trong mang theo thu tu
void baide()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	fflush(stdin);
	int i;
	char a[100][100], temp[100];
	for (i = 0; i < n; i++)
	{
		printf("Nhap chuoi a[%d]: ", i);
		gets(a[i]);
	}
	
	int k;
	for (i = 0; i < n-1; i++)
	{
		for (k = i+1; k <= n-1; k++)
		{
			if (strlen(a[i]) > strlen(a[k]))
			{
				strcpy(temp, a[i]);
				strcpy(a[i], a[k]);
				strcpy(a[k], temp);
			}
			else if (strlen(a[i]) == strlen(a[k]) && strcmp(a[i], a[k]) > 0)
			{
				strcpy(temp, a[i]);
				strcpy(a[i], a[k]);
				strcpy(a[k], temp);
			}
		}
	}
	
	for (i = 0; i <= n-1; i++)
	printf("%s ", a[i]);
}

int main()
{
	int n;
	do
	{
		system("cls");
		printf("Chon so tuong ung de bat dau chuong trinh: \n");
		printf("1: Bai kho.\n");
		printf("2: Bai de.\n");
		scanf("%d", &n);
		if (n == 1)
		{
			system("cls");
			fflush(stdin);
			baikho();
		} 
		else if (n == 2)
		{
			system("cls");
			baide();
		}
	}
	while (n < 1 || n > 2);
}
