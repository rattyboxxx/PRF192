#include <stdio.h>
#include <math.h>

	/* Nhap so giay, quy doi thanh phut gio ngay thang tuong ung */

/* Cach 1 */

void time() {
	int giay;
	printf("Nhap so giay: ");
	scanf("%d", &giay);
	
	int phut, gio, ngay, thang;

		phut = giay / 60;
		giay = giay % 60;
		gio = phut / 60;
		phut = phut % 60;
		ngay = gio / 24;
		gio = gio % 24;
		thang = ngay / 30;
		ngay %= 30;

	printf("%d thang, %d ngay, %d gio, %d phut, %d giay.", thang, ngay, gio, phut, giay);
}

/* Cach 2 */

void thoigian() {
	int giay;
	int a[5];
	int b[] = {60, 60, 24, 30};
	printf("Nhap so giay: ");
	scanf("%d", a[0]);
	
	int i;
	
	for (i = 0; i < 5; i++)
	{
		a[i+1] = a[i] / b[i];
		a[i] %= b[i];
	}
	
	for (i = 4; i >= 0; i--)
	printf("%d\n", a[i]);
}

	/* Doi tien tu menh gia cao nhat xuong menh gia thap nhat voi it so to nhat */
	
/* Cach 1 */
	
void money() {
	int tien;
	printf("Nhap so tien: ");
	scanf("%d", &tien);
	
	int namtram, haitram, mottram, namchuc, haichuc, motchuc, namnghin, hainghin, motnghin;

		namtram = tien / 500000;
		tien %= 500000;
		haitram = tien / 200000;
		tien %= 200000;
		mottram = tien / 100000;
		tien %= 100000;
		namchuc = tien / 50000;
		tien %= 50000;
		haichuc = tien / 20000;
		tien %= 20000;
		motchuc = tien / 10000;
		tien %= 10000;
		namnghin = tien / 5000;
		tien %= 5000;
		hainghin = tien / 2000;
		tien %= 2000;
		motnghin = tien / 1000;
		tien %= 1000;
	
	printf("%d 500k, %d 200k, %d 100k, %d 50k, %d 20k, %d 10k, %d 5k, %d 2k, %d 1k, du %d dong.", namtram, haitram, mottram, namchuc, haichuc, motchuc, namnghin, hainghin, motnghin, tien);
}

/* Cach 2 */

void tien() {
	int tien;
	printf("Nhap so tien: ");
	scanf("%d", &tien);
	int i, j;
	
//	int dau[] = {5, 2, 1};
//	int duoi[] = {100000, 10000, 1000};
//	int a[3][3]; 
//	
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			a[j][i] = tien / (dau[j]*duoi[i]);
//			tien %= (dau[j]*duoi[i]);
//			if (a[j][i] > 0) printf("%d: %d\n", (dau[j]*duoi[i]), a[j][i]);
//		}	
//	}
//	

	for (i = 5; i >= 3; i--)
{
	for (j = 5; j > 0; j--)
	if ((j-5)*(j-2)*(j-1) == 0)
	{
			int b = j*pow(10,i);
			int a = tien / b;
			tien = tien % b;
			if (a > 0) printf("%dk: %d\n", b,a);
	}	
}
	printf("Du: %d", tien);
}

//int main()
//{
//	return 0;
//}
