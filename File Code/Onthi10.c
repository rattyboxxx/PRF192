#include <stdio.h>
#include <math.h>

// In ra cac phan tu phan biet
void q2() {
	int n;
	printf("How many input(s)?: ");
	scanf("%d", &n);
	printf("Input %d element(s):\n", n);
	int i, j, a[100], b[100], k = 0;
	for (i = 0; i < n; i++) {
		int check = 0;
		scanf("%d", &a[i]);
		if (i == 0) b[k++] = a[i];
		else {
			for (j = 0; j < k; j++) {
				if (b[j] == a[i]) check = 1;
			}
			if (!check) b[k++] = a[i];
		}
	}
	for (i = 0; i < k-1; i++) {
		for (j = i+1; j < k; j++) {
			if (b[i] > b[j]) {
				b[i] += b[j];
				b[j] = b[i] - b[j];
				b[i] -= b[j];
			}
		}
	}
	for (i = 0; i < k; i++) {
		i == k-1 ? printf("%d", b[i]) : printf("%d ", b[i]);
	}

}

// Dem so luong cac chu so xuat hien trong ma tran
void q4() {
	int n, m;
	printf("Input n, m:\n");
	scanf("%d%d", &n, &m);
	int a[100][100], i, j;
	printf("Input %d element(s):\n", n*m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	for (i = 0; i < n; i++) {
		printf("|\t");
		for (j = 0; j < m; j++) {
			printf("%2d\t", a[i][j]);
		}
		printf("|\n");
	}
	printf("\n");
	int b[10];
	for (i = 0; i < 10; i++) b[i] = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			int x = a[i][j];
			if (x == 0) b[0]++;
			else {
				while (x > 0) {
					b[x % 10]++;
					x /= 10;
				}
			}
		}
	}
	
	printf("Digit:\t");
	for (i = 0; i < 10; i++) {
		printf("%d\t", i);
	}
	printf("\nFreq:\t");
	for (i = 0; i < 10; i++) {
		printf("%d\t", b[i]);
	}
}

int main() {
	q4();
	return 0;
}
