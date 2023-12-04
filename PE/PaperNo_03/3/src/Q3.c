#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int prime(int n) {
	if (n < 2) return 0;
	int i;
	for (i = 2; i < n; ++i) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main() {
  	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n; scanf("%d", &n);
	int a[n], i;
	for (i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	int count = 0;
	
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for (i = 0; i < n; ++i) {
		if (prime(a[i])) {
			printf("%d ", a[i]);
			count = 1;
		}
	}
	if (!count) printf("No prime number exists");
	else printf("\b");
	
  	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	system ("pause");
  	return(0);
}
