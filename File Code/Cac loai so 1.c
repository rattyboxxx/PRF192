#include <stdio.h>
#include <math.h>

void quaylai();

// kiem tra snt va cac uoc cua no
void mausnt()
{
	int n; 
	printf("Nhap n: ");
	scanf("%d", &n);
	int check = 0, i, dem = 0;
	
	if (n >= 2)
	{
		printf("%d khong phai la so nguyen to.\nCac uoc cua %d la: ", n, n);
		
		for (i = 1; i <= n/2; i++)
		{
			if (n % i == 0)
			{
				dem += 1;
				printf("%d ", i);
			}
		}
		
		printf("%d.\n", n);
		
		if (dem == 1)
		{
			system("cls");
			printf("Nhap n: %d\n", n);
			printf("%d la so nguyen to.\n", n);
		}
	}
	else printf("%d khong phai la so nguyen to.\n", n);
	quaylai();
}

	/*
	Btvn
	Nhap n, in ra n so nguyen to
	Nhap n, in ra cac so nguyen to tu 1 den n
	Thay so nguyen to bang so Fibonacci, Armstrong, Palinedrome
	*/

/*Ham So nguyen to */
	
int checksnt(int n)
{
	int i;
	for (i = 2; i < n; i++)
		if (n % i == 0) return 0;
	return 1;
}

void snt2()
{
	printf("Nhap n: ");
	int n;
	scanf("%d", &n);	
	int i = 2;
	
	while (i <= n)
	{
		if (checksnt(i)) printf("%d ",i);
		i++;
	}
	printf("\n");
	quaylai();
}

void snt1()
{
	printf("Nhap n: ");
	int n; scanf("%d", &n);	
	int i = 2, dem = 0;
	
	while (dem <= n)
	{
		if (checksnt(i))
		{
			printf("%d ",i);
			dem++;
		}
		i++;
	}		
	printf("\n");
	quaylai();
}

/*Ham Armstrong */

int checkarm(int n)
{
	int dem = 0;
	int a = n;
	
	while (a > 0)
	{
		a /= 10;
		dem++;
	}
	
	int sum = 0;
	a = n;
	
	while (a > 0)
	{
		sum += pow(a%10, dem);
		a /= 10;
	}
	
	if (n == sum) return 1;
	return 0;
}

void arm2()
{
	printf("Nhap n: ");
	int n; scanf("%d", &n);	
	int i = 0;
	
	while (i <= n)
	{
		if (checkarm(i)) printf("%d ",i);
		i++;
	}
	printf("\n");
	quaylai();
}

void arm1()
{
	printf("Nhap n: ");
	int n; scanf("%d", &n);	
	int i = 0, dem = 0;
	
	while (dem <= n)
	{
		if (checkarm(i))
		{
			printf("%d ",i);
			dem++;
		}
		i++;
	}		
	printf("\n");
	quaylai();
}

/*Ham Fibonacci */
	
void fib2()
{
	printf("Nhap n: ");
	int n; scanf("%d", &n);
	int i = 1, j = 2, c;
	
	while (i <= n)
	{
		printf("%d ", i);
		c = i + j;
		i = j;
		j = c;
	}
	printf("\n");
	quaylai();
}

void fib1()
{
	printf("Nhap n: ");
	int n; scanf("%d", &n);
	int i = 1, j = 2, dem = 1, c;
	
	while (dem <= n)
	{
		printf("%d ", i);
		c = i + j;
		i = j;
		j = c;
		dem++;
	}		
	printf("\n");
	quaylai();
}

/*Ham Palindrome */

int checkpal(int n)
{
	int sum = 0;
	int a = n;
	while (a > 0)
	{
		sum = sum*10 + a%10;
		a /= 10;
	}
	if (n == sum) return 1; else return 0;
}

void pal2()
{
	int n; scanf("%d", &n);	
	int i = 0;
	
	while (i <= n)
	{
		if (checkpal(i)) printf("%d ",i);
		i++;
	}
	printf("\n");
	quaylai();
}

void pal1()
{
	int n; scanf("%d", &n);	
	int i = 0, dem = 0;
	
	while (dem <= n)
	{
		if (checkpal(i))
		{
			printf("%d ",i);
			dem++;
		}
		i++;
	}		
	printf("\n");
	quaylai();
}

/* Lung tung */

void ctc() 
{
	int n = 0;
	do
	{
		printf("Ban muon lam gi?\n");
		printf("1. Nhap n, in ra n so dau tien thoa man dieu kien nao do\n");
		printf("2. Nhap n, in ra cac so thoa man dieu kien nao do tu 1 den n\n");
		printf("3. Nhap n, in ra uoc cua n neu n la hop so\n");
		printf("4. Thoat, khong muon nghich nua\n");
		scanf("%d", &n);
		system("cls");
		
		if (n == 1)
		{
			int i;
			do
			{
				printf("Ban muon n thoa man dieu kien nao?\n");
				printf("1. n la so nguyen to\n");
				printf("2. n la so fibonacci\n");
				printf("3. n la so palindrome\n");
				printf("4. n la so armstrong\n");
				scanf("%d", &i);
				system("cls");
				if (i == 1) snt1();
				if (i == 2) fib1();
				if (i == 3) pal1();
				if (i == 4) arm1();
			}
			while (n < 1 || n > 4);
		}
		
		else if (n == 2)
		{
			int i;
			do
			{
				printf("Ban muon n thoa man dieu kien nao?\n");
				printf("1. n la so nguyen to\n");
				printf("2. n la so fibonacci\n");
				printf("3. n la so palindrome\n");
				printf("4. n la so armstrong\n");
				scanf("%d", &i);
				system("cls");
				if (i == 1) snt2();
				if (i == 2) fib2();
				if (i == 3) pal2();
				if (i == 4) arm2();
			}
			while (n < 1 || n > 4);
		}
		else if (n == 4)
		{
			system("cls");
			printf("Chuong trinh ket thuc. Cam on ban da su dung.");
			break;
		}
		else if (n == 3) mausnt();
	}
	while (n < 1 || n > 4);
}

void quaylai() {
	int ans;
	do
	{
		printf("\nBan co muon quay lai man hinh chinh khong?\n");
		printf("1: Co, 0: Khong\n");
		scanf("%d", &ans);
		if (ans == 1) 
		{
			system("cls");
			ctc();
		}
		else if (ans == 0) {
			system("cls");
			printf("Chuong trinh ket thuc. Cam on ban da su dung.");
			break;
		}
	}
	while (ans < 0 || ans > 1);
}

/* Ctc */

int main()
{
	ctc();
}




