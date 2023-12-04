#include <stdio.h>
#include <math.h>

void quaylai();

	/*
	Btvn
	Nhap n, in ra n so nguyen to
	Nhap n, in ra cac so nguyen to tu 1 den n
	Nhap p, q, in ra p so nguyen to thoa man < n, q so ngueyn to thoa man > n
	Cac so nguyen to co tong cac chu so chia het cho 5 v.v
	Thay so nguyen to bang so Fibonacci, Armstrong, Palinedrome
	*/

/* TONG CHU SO CHIA HET CHO 5 */

int check5(int n)
{
	int sum = 0;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	if (sum % 5 == 0) return 1;
	return 0;
}


/* SO NGUYEN TO */

int checksnt(int n)
{
	int i;
	for (i = 2; i < sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;
}

	/* snt1: n so */
	
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
	quaylai();	
}

	/* snt2: nho hon n */
	
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
	quaylai();
}

	/* snt3: p so < n, q so > n */
	
void snt3()
{
	printf("Nhap n: ");
	int n; scanf("%d", &n);
	printf("Nhap p: ");
	int p; scanf("%d", &p);
	printf("Nhap q: ");
	int q; scanf("%d", &q);	
	int dem = 0, i = 2;
	while (dem < p && i < n)
	{
		if (checksnt(i))
		{
			printf("%d ", i);
			dem ++;
		}
		i++;
 	}
 	printf("\n");
 	i = n + 1; dem = 0;
 	while (dem < q)
 	{
 		if (checksnt(i))
		{
			printf("%d ", i);
			dem ++;
		}
		i++;
	}
	quaylai();
}

	/* snt4: in n so, tong cac chu so chia het cho 5 */

void snt4()
{
	printf("Nhap n: ");
	int n; scanf("%d", &n);	
	int i = 2, dem = 0;
	
	while (dem <= n)
	{
		if (checksnt(i) && check5(i))
		{
			printf("%d ",i);
			dem++;
		}
		i++;
	}
	quaylai();	
}

	/* snt5: in cac so <= 5, tong chu so chia het cho 5 */

void snt5()
{
	printf("Nhap n: ");
	int n;
	scanf("%d", &n);	
	int i = 2;
	
	while (i <= n)
	{
		if (checksnt(i) && check5(i)) printf("%d ",i);
		i++;
	}
	quaylai();
}

/* SO ARMSTRONG */

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

	/* arm1: n so */
	
void arm1()
{
	printf("Nhap n: ");
	int n; scanf("%d", &n);	
	int i = 2, dem = 0;
	
	while (dem <= n)
	{
		if (checkarm(i))
		{
			printf("%d ",i);
			dem++;
		}
		i++;
	}
	quaylai();	
}

	/* arm2: nho hon n */
	
void arm2()
{
	printf("Nhap n: ");
	int n;
	scanf("%d", &n);	
	int i = 2;
	
	while (i <= n)
	{
		if (checkarm(i)) printf("%d ",i);
		i++;
	}
	quaylai();
}

	/* arm3: p so < n, q so > n */
	
void arm3()
{
	printf("Nhap n: ");
	int n; scanf("%d", &n);
	printf("Nhap p: ");
	int p; scanf("%d", &p);
	printf("Nhap q: ");
	int q; scanf("%d", &q);	
	int dem = 0, i = 2;
	while (dem < p && i < n)
	{
		if (checkarm(i))
		{
			printf("%d ", i);
			dem ++;
		}
		i++;
 	}
 	printf("\n");
 	i = n + 1; dem = 0;
 	while (dem < q)
 	{
 		if (checkarm(i))
		{
			printf("%d ", i);
			dem ++;
		}
		i++;
	}
	quaylai();
}

	/* arm4: in n so, tong cac chu so chia het cho 5 */

void arm4()
{
	printf("Nhap n: ");
	int n; scanf("%d", &n);	
	int i = 2, dem = 0;
	
	while (dem <= n)
	{
		if (checkarm(i) && check5(i))
		{
			printf("%d ",i);
			dem++;
		}
		i++;
	}	
	quaylai();	
}

	/* arm5: in cac so <= 5, tong chu so chia het cho 5 */

void arm5()
{
	printf("Nhap n: ");
	int n;
	scanf("%d", &n);	
	int i = 2;
	
	while (i <= n)
	{
		if (checkarm(i) && check5(i)) printf("%d ",i);
		i++;
	}
	quaylai();
}

/* SO PALINDROME */

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

	/* pal1: n so*/
	
void pal1()
{
	printf("Nhap n: ");
	int n; scanf("%d", &n);	
	int i = 2, dem = 0;
	
	while (dem <= n)
	{
		if (checkpal(i))
		{
			printf("%d ",i);
			dem++;
		}
		i++;
	}		
	quaylai();
}

	/* pal2: nho hon n */
	
void pal2()
{
	printf("Nhap n: ");
	int n;
	scanf("%d", &n);	
	int i = 2;
	
	while (i <= n)
	{
		if (checkpal(i)) printf("%d ",i);
		i++;
	}
	quaylai();
}

	/* pal3: p so < n, q so > n */
	
void pal3()
{
	printf("Nhap n: ");
	int n; scanf("%d", &n);
	printf("Nhap p: ");
	int p; scanf("%d", &p);
	printf("Nhap q: ");
	int q; scanf("%d", &q);	
	int dem = 0, i = 2;
	while (dem < p && i < n)
	{
		if (checkpal(i))
		{
			printf("%d ", i);
			dem ++;
		}
		i++;
 	}
 	printf("\n");
 	i = n + 1; dem = 0;
 	while (dem < q)
 	{
 		if (checkpal(i))
		{
			printf("%d ", i);
			dem ++;
		}
		i++;
	}
	quaylai();
}

	/* pal4: in n so, tong cac chu so chia het cho 5 */

void pal4()
{
	printf("Nhap n: ");
	int n; scanf("%d", &n);	
	int i = 2, dem = 0;
	
	while (dem <= n)
	{
		if (checkpal(i) && check5(i))
		{
			printf("%d ",i);
			dem++;
		}
		i++;
	}
	quaylai();	
}

	/* arm5: in cac so <= 5, tong chu so chia het cho 5 */

void pal5()
{
	printf("Nhap n: ");
	int n;
	scanf("%d", &n);	
	int i = 2;
	
	while (i <= n)
	{
		if (checkpal(i) && check5(i)) printf("%d ",i);
		i++;
	}
	quaylai();
}

/* SO FIBONACCI */

int fib(int n)
{
	if (n==0 || n == 1) return 1;
	return (fib(n-1) + fib(n-2));
}

	/* fib1: n so*/
	
void fib1()
{
	printf("Nhap n: ");
	int n; scanf("%d", &n);	
	int i = 1;
	for (i = 1; i <= n; i++)
		printf("%d ", fib(i));
	quaylai();
}

	/* fib2: nho hon n */
	
void fib2()
{
	printf("Nhap n: ");
	int n;
	scanf("%d", &n);	
	int i = 1;
	do
	{
		printf("%d ", fib(i));
		i++;
	}
	while (fib(i) <= n);
	quaylai();
}

	/* fib3: p so < n, q so > n */
	
void fib3()
{
	printf("Nhap n: ");
	int n; scanf("%d", &n);
	printf("Nhap p: ");
	int p; scanf("%d", &p);
	printf("Nhap q: ");
	int q; scanf("%d", &q);	
	int dem = 0, i = 1;
	while (dem < p && fib(i) < n)
	{
		printf("%d ", fib(i));
		i++;
		dem++;
	}
	printf("\n");

	dem = 0;
	
	while (fib(i) <= n)
	{
		i++;	
	}
	
	while (dem < q)
	{
		printf("%d ", fib(i));
		dem++;
		i++;
	}
	quaylai();
}

	/* fib4: in n so, tong cac chu so chia het cho 5 */

void fib4()
{
	printf("Nhap n: ");
	int n; scanf("%d", &n);	
	int i = 1, dem = 0;
	while (dem < n)
	{
		if (check5(fib(i)))
		{
			printf("%d ", fib(i));
			dem++;
		}
		i++;
	}
	quaylai();
}

	/* fib5: in cac so <= n, tong chu so chia het cho 5 */

void fib5()
{
	printf("Nhap n: ");
	int n;
	scanf("%d", &n);	
	int i = 1;
	while (fib(i) < n)
	{
		if (check5(fib(i))) printf("%d ", fib(i));
		i++;
	}
	quaylai();
}

/* LUNG TUNG */

void ctc() 
{
	int n = 0;
	do
	{
		printf("Ban muon lam gi?\n");
		printf("1. Nhap n, in ra n so dau tien thoa man dieu kien nao do\n");
		printf("2. Nhap n, in ra cac so thoa man dieu kien nao do tu 1 den n\n");
		printf("3. Nhap n, nhap p, nhap q, in ra p so thoa man < n, q so thoa man > n\n");
		printf("4. Nhap n, in ra n so dau tien thoa man dieu kien nao do va tong cac chu so chia het cho 5\n");
		printf("5. Nhap n, in ra cac so thoa man dieu kien nao do tu 1 den n va tong cac chu so chia het cho 5\n");
		printf("6. Thoat, khong muon nghich nua\n");
		scanf("%d", &n);
		system("cls");
		
		if (n == 1)
		{
			int i;
			do
			{
				printf("Ban muon cac so thoa man dieu kien nao?\n");
				printf("1. la so nguyen to\n");
				printf("2. la so fibonacci\n");
				printf("3. la so palindrome\n");
				printf("4. la so armstrong\n");
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
				printf("Ban muon cac so thoa man dieu kien nao?\n");
				printf("1. la so nguyen to\n");
				printf("2. la so fibonacci\n");
				printf("3. la so palindrome\n");
				printf("4. la so armstrong\n");
				scanf("%d", &i);
				system("cls");
				if (i == 1) snt2();
				if (i == 2) fib2();
				if (i == 3) pal2();
				if (i == 4) arm2();
			}
			while (n < 1 || n > 4);
		}
		
		else if (n == 3)
		{
			int i;
			do
			{
				printf("Ban muon cac so thoa man dieu kien nao?\n");
				printf("1. la so nguyen to\n");
				printf("2. la so fibonacci\n");
				printf("3. la so palindrome\n");
				printf("4. la so armstrong\n");
				scanf("%d", &i);
				system("cls");
				if (i == 1) snt3();
				if (i == 2) fib3();
				if (i == 3) pal3();
				if (i == 4) arm3();
			}
			while (n < 1 || n > 4);
		}
		
		else if (n == 4)
		{
			int i;
			do
			{
				printf("Ban muon cac so thoa man dieu kien nao?\n");
				printf("1. la so nguyen to\n");
				printf("2. la so fibonacci\n");
				printf("3. la so palindrome\n");
				printf("4. la so armstrong\n");
				scanf("%d", &i);
				system("cls");
				if (i == 1) snt4();
				if (i == 2) fib4();
				if (i == 3) pal4();
				if (i == 4) arm4();
			}
			while (n < 1 || n > 4);
		}
		
		else if (n == 5)
		{
			int i;
			do
			{
				printf("Ban muon cac so thoa man dieu kien nao?\n");
				printf("1. la so nguyen to\n");
				printf("2. la so fibonacci\n");
				printf("3. la so palindrome\n");
				printf("4. la so armstrong\n");
				scanf("%d", &i);
				system("cls");
				if (i == 1) snt5();
				if (i == 2) fib5();
				if (i == 3) pal5();
				if (i == 4) arm5();
			}
			while (n < 1 || n > 4);
		}
		
		else if (n == 6)
		{
			system("cls");
			printf("Chuong trinh ket thuc. Cam on ban da su dung.");
			break;
		}
	}
	while (n < 1 || n > 6);
}

void quaylai() {
	int ans;
	do
	{
		printf("\n\nBan co muon quay lai man hinh chinh khong?\n");
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

/* INT MAIN */

int main()
{
	ctc();
	return 0;
}
