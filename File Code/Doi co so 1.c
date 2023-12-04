#include <stdio.h>
#include <string.h>
#include <math.h>

void dec_to_bin1(int n)
{
	int a[100], i = 0;
	
	while (n > 1)
	{
		a[i] = n%2;
		i++;
		n/=2;
	}
	
	a[i] = n%2;
	
	int j;
	
	for (j = i; j >= 0; j--)
	{
		printf("%d", a[j]);
	}
}

//void dec_to_bin2(float n)
//{		
//	while (n != 1)
//	{
//		n *= 2;
//		if (n > 1)
//		{
//			printf("1");
//			n -= 1;
//		}
//		else if (n < 1)
//		{
//			printf("0");
//		}
//	}
//	printf("1");
//}

void dec_to_hexdec1(int n)
{
	int a[100], i = 0;
	
	while (n > 15)
	{
		a[i] = n%16;
		i++;
		n/=16;
	}
	
	a[i] = n%16;
	
	int j;
	
	for (j = i; j >= 0; j--)
	{
		if (a[j] == 15) printf("F");
		else if (a[j] == 14) printf("E");
		else if (a[j] == 13) printf("D");
		else if (a[j] == 12) printf("C");
		else if (a[j] == 11) printf("B");
		else if (a[j] == 10) printf("A");
		else printf("%d", a[j]);
	}
}

//void dec_to_hexdec2(float n)
//{	
//	int dem = 0;
//	while (dem < 4)
//	{
//		n *= 16;
//		if (n >= 15)
//		{
//			printf("F");
//			if (n == 15) break;
//			n -= 15;
//		}
//		else if (n >= 14)
//		{
//			printf("E");
//			if (n == 14) break;
//			n -= 14;
//		}
//		else if (n >= 13)
//		{
//			printf("D");
//			if (n == 13) break;
//			n-= 13;
//		}
//		else if (n >= 12)
//		{
//			printf("C");
//			if (n == 12) break;
//			n -= 12;
//		}
//		else if (n >= 11)
//		{
//			printf("B");
//			if (n == 11) break;
//			n -= 11;
//		}
//		else if (n >= 10)
//		{
//			printf("A");
//			if (n == 10) break;
//			n-= 10;
//		}
//		else if (n >= 9)
//		{
//			printf("9");
//			if (n == 9) break;
//			n-=9;
//		}
//		else if (n >= 8)
//		{
//			printf("8");
//			if (n == 8) break;
//			n-=8;
//		}
//		else if (n >= 7)
//		{
//			printf("7");
//			if (n == 7) break;
//			n-=7;
//		}
//		else if (n >= 6)
//		{
//			printf("6");
//			if (n == 6) break;
//			n-=6;
//		}
//		else if (n >= 5)
//		{
//			printf("5");
//			if (n == 5) break;
//			n-=5;
//		}
//		else if (n >= 4)
//		{
//			printf("4");
//			if (n == 4) break;
//			n-=4;
//		}
//		else if (n >= 3)
//		{
//			printf("3");
//			if (n == 3) break;
//			n-=3;
//		}
//		else if (n >= 2)
//		{
//			printf("2");
//			if (n == 2) break;
//			n-=2;
//		}
//		else if (n >= 1)
//		{
//			printf("1");
//			if (n - 1 == 0) break;
//			n-=1;
//		}
//		else if (n < 1)
//		{
//			printf("0");
//			if (n == 0) break;
//		}
//		dem++;
//	}
//}

void hexdec_to_dec1(char c[20])
{	
	int b[20];
	int i;
	
	int a = strlen(c);
	for (i = 0; i < a; i++)
		{
			if (c[i] >= 65 && c[i] <= 70) b[i] = c[i] - 55;
			else b[i] = c[i] - 48;
		}
	
	int sum = 0;
	for (i = 0; i < a; i++)
	{
		sum = sum + pow(16, a-1-i)*b[i];
	}
	
	printf("%d", sum);
}

void hexdec_to_bin1(char c[20])
{
	int n = strlen(c);
	int i;
	
	for (i = 0; i < n; i++)
	{
		if (c[i] == 48) printf("0000 ");
		else if (c[i] == 49) printf("0001 ");
		else if (c[i] == 50) printf("0010 ");
		else if (c[i] == 51) printf("0011 ");
		else if (c[i] == 52) printf("0100 ");
		else if (c[i] == 53) printf("0101 ");
		else if (c[i] == 54) printf("0110 ");
		else if (c[i] == 55) printf("0111 ");
		else if (c[i] == 56) printf("1000 ");
		else if (c[i] == 57) printf("1001 ");
		else if (c[i] == 65) printf("1010 ");
		else if (c[i] == 66) printf("1011 ");
		else if (c[i] == 67) printf("1100 ");
		else if (c[i] == 68) printf("1101 ");
		else if (c[i] == 69) printf("1110 ");
		else if (c[i] == 70) printf("1111 ");
	}
}

int main()
{
	char s[20];
	scanf("%s", &s);
	hexdec_to_bin1(s);
	return 0;
}
