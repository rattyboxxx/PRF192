#include <stdio.h>

int main() {
	int n, i = 0;
	scanf("%ll", &n);
	while ((1 << i) <= n) {
		++i;
	}
	--i;
	while (i >= 0) {
		if (n & (1 << i)) printf("1");
		else printf("0");
		i--;
	}
	return 0;
}
