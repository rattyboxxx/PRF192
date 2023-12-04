#include <stdio.h>
#include <math.h>

void quaylai();

	/* Giai pt bac 1 */
	
void ptb1()
{
	int a, b;
	printf("Giai phuong trinh bac 1 ax + b = 0.\n");
	printf("Nhap a: "); scanf("%d", &a);
	printf("Nhap b: "); scanf("%d", &b);
	if (a != 0)
	{
		float x = (float) -b/a;
		printf("Nghiem cua phuong trinh %dx + %d = 0 la %g.\n", a, b, x);
	}
	else if (b != 0) printf("Phuong trinh vo nghiem.\n");
	else printf("Phunog trinh vo so nghiem.\n");
	quaylai();
}

	/* PT bac 2 */
	
void ptb2()
{
	int a, b, c;
	printf("Giai phuong trinh bac 2 ax^2 + bx + c = 0.\n");
	printf("Nhap a: "); scanf("%d", &a);
	printf("Nhap b: "); scanf("%d", &b);
	printf("Nhap c: "); scanf("%d", &c);
	int delta = pow(b,2) - 4*a*c;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0) printf("Phuong trinh co vo so nghiem thuc.\n");
			else printf("Phuong trinh khong co nghiem thuc.\n");
		}
		else if (b != 0)
		{
			float x1 = (float) -c/b;
			printf("Phuong trinh co nghiem thuc duy nhat x = %g.\n", x1);
		}
	}
	else if (delta > 0)
	{
		float x1 = (float) (-b + pow(delta, 0.5))/2/a; 
		float x2 = (float) (-b - pow(delta, 0.5))/2/a;
		printf("Phuong trinh co 2 nghiem thuc x1 = %g, x2 = %g.\n", x1, x2);
	}
	else if (delta == 0)
	{
		float x1 = (float) -b/2/a;
		printf("Phuong trinh co nghiem thuc kep x = %g.\n", x1);
	}
	else printf("Phuong trinh khong co nghiem thuc.\n");
	quaylai();
}

	/* Giai thua */
	
long long int giaithua(int n)
{
	if (n == 1) return n;
	return n*giaithua(n-1);
}
	
void factorial()
{
	int n; printf("Nhap n: "); scanf("%d", &n);
	printf("%d! = %lld.\n",n, giaithua(n));
	quaylai();
}

	/* Tinh tong chu so */
	
void tongchuso()
{
	int n; printf("Nhap n: "); scanf("%d", &n);
	int sum = 0;
	int a = n;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	printf("Tong cac chu so cua %d la %d.\n", a, sum);
	quaylai();
}

	/* Lung tung */

void ctc() {
	int n;
	do
	{
		printf("Nhap n tuong ung de chon chuong trinh:\n");
		printf("1. ptb1\n");
		printf("2. ptb2\n");
		printf("3. luy thua\n");
		printf("4. tong chu so\n");
		scanf("%d", &n);
		system("cls");
		if (n == 1) ptb1();
		if (n == 2) ptb2();
		if (n == 3) factorial();
		if (n == 4) tongchuso();
	}
	while (n < 1 || n > 4);
}

void quaylai() {
	int ans;
	do
	{
		printf("Ban co muon chay cac chuong trinh khac khong?\n");
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

	/* CT chinh */
	
int main ()
{
	ctc();
	return 0;
}

