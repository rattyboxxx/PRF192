#include <stdio.h>
#include <math.h>

	/* MAU TREN LOP */

void mau() {
	int a, b, c, d, e;
	printf("Nhap a: ");
	scanf("%d", &a, "\n");
	printf("Nhap b: ");
	scanf("%d", &b, "\n");
	printf("Nhap c: ");
	scanf("%d", &c, "\n");
	printf("Nhap d: ");
	scanf("%d", &d, "\n");
	printf("Nhap e: ");
	scanf("%d", &e, "\n");
	printf("Tong: %d\n", a+b+c+d+e);
	printf("Tich: %d\n", a*b*c*d*e);
	printf("Tbc: %d\n", a+b+c+d+e);
	printf("Tbn: %3.3f\n\n", pow(a*b*c*d*e,0.2));
	quaylai();
}

	/* SO SANH A VA B */

void sosanh() {
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	if (a > b) printf("a > b\n\n");
	else if (a < b) printf("a < b\n\n");
	else printf("a = b\n\n");
	quaylai();
}

	/* TINH TONG, TICH, TBC, TBN CUA N SO NHAP VAO TU BAN PHIM */

void tinhtoan() {
	int array[100];
	int tong = 0, tich = 1;
	int n;
	int i;

	printf("Nhap n: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("Nhap so thu %d: ", i+1);
	    scanf("%d", &array[i]);
	    tong += array[i];
	    tich *= array[i];
	}

	float tbc = (float) tong/n;
	float tbn = pow(tich, 1.0/n);

	printf("Tong: %d\nTich: %d\nTBC: %g\nTBN: %g\n\n", tong, tich, tbc, tbn);
	quaylai();
}

	/* NHAP N SO, IN RA MIN, MAX, TBC */

void tonghop() {
	int sum = 0, array[100], n, i;
	printf("Nhap n: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("Nhap so thu %d: ", i+1);
	    scanf("%d", &array[i]);
	    sum += array[i];
	}

	int max = array[0], min = array[0];

	for (i = 1; i < n; i++)
	{
		if (min > array[i]) min = array[i];
		if (max < array[i]) max = array[i];
	}
	float tbc = (float) sum/n;
	printf("TBC: %g\nMin: %d\nMax: %d\n\n", tbc, min, max);
	quaylai();
}

	/* NHAP 3 SO, XET DIEU KIEN TAM GIAC, NEU LA TAM GIAC THI IN CHU VI, DIEN TICH */

void tamgiac() {
	int a, b, c;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	if (a > 0 && b  > 0 && c > 0 && a + b > c && b + c > a && c + a > b)
	{
		float d = (float) (a+b+c)/2;
		int P = a+b+c;
		float S = sqrt(d*(d-a)*(d-b)*(d-c));
		printf("P: %d\nS: %.3f\n\n", P, S);
	}
	else printf("Khong hop le!\n\n");
	quaylai();
}

	/* CHUONG TRINH CHINH */

void ctc() {
	int n;
	do
	{
		printf("Nhap n tuong ung de chon chuong trinh:\n");
		printf("1. Mau\n");
		printf("2. So sanh\n");
		printf("3. Tinh toan\n");
		printf("4. Tong hop\n");
		printf("5. Tam giac\n");
		scanf("%d", &n);
		system("cls");
		if (n == 1) mau();
		if (n == 2) sosanh();
		if (n == 3) tinhtoan();
		if (n == 4) tonghop();
		if (n == 5) tamgiac();
	}
	while (n < 1 || n > 5);
}

	/* CHON QUAY LAI MAN HINH CHINH */

void quaylai() {
	int ans;
	do
	{
		printf("Ban co muon quay lai man hinh chinh khong?\n");
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

	/* HAM MAIN */

int main() {
	ctc();
	return 0;
}


