#include <stdio.h>
#include <math.h>

// Kiem tra snt
int snt(int n)
{
	if (n < 2) return 0;
	int i;
	for (i = 2; i <= (int) sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;
}

int main()
{
	int a[100], n;
	
	// Nhap dau vao
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int i;
	for (i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	// In snt, tinh tong, max, min
	printf("\nCac so nguyen to trong day la: ");
	
	int max = a[0], min = a[0], tong = a[0], tongsnt = 0;
	
	if (snt(a[0]))
	{
		printf("%d ", a[0]);
		tongsnt += a[0];
	}
	
	for (i = 1; i < n; i++)
		{
			if (snt(a[i]))
			{
				tongsnt += a[i];
				printf("%d ", a[i]);
			}
			tong += a[i];
			if (a[i] > a[0]) max = a[i];
			if (a[i] < a[0]) min = a[i];
		}
	
	// Tinh tbc
	double tbc = tong / (n*1.0);
	
	// Tinh tong 3 so chan cuoi cung
	int x = 0, t = n-1, tong3chan = 0;
	while (x != 3)
	{
		if (a[t] % 2 == 0)
		{
			x++;
			tong3chan += a[t];
		}
		
		t--;
	
		if (t == -1) break;
	}
	
	// Tinh tong 3 snt dau tien
	int y = 0, z = 0, tong3snt = 0;
	while (y != 3)
	{
		if (snt(a[z]))
		{
			y++;
			tong3snt += a[z];
		}
		
		z++;
		
		if (z == n) break;
	}
	
	// In ra man hinh
	printf("\nTong: %d\n", tong);
	printf("Max: %d\n", max);
	printf("Min: %d\n", min);
	printf("Tbc: %g\n", tbc);
	printf("Tong 3 phan tu chan cuoi: %d\n", tong3chan);
	printf("Tong 3 snt dau: %d\n", tong3snt);
	printf("Tong cac snt: %d", tongsnt);
	
	return 0;
}
