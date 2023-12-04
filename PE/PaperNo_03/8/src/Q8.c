#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n; scanf("%d", &n);
	int a[n];
	int i;
	for (i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	int j = 0, k, b[100], check;
	for (i = 0; i < n; ++i) {
		check = 0;
		for (k = 0; k < j; ++k) {
			if (b[k] == a[i]) {
				check = 1;
				break;
			}
		}
		if (!check) {
			b[j++] = a[i];
		}
	}
	for (i = 0; i < j-1; ++i) {
		for (k = i+1; k < j; ++k) {
			if (b[i] > b[k]) {
				b[i] += b[k];
				b[k] = b[i] - b[k];
				b[i] = b[i] - b[k];
			}
		}
	}
	for (i = 0; i < j; ++i) {
		printf("%d ", b[i]);
	}
	
  	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	system ("pause");
  	return(0);
}
