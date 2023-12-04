#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n; scanf("%d", &n);
	int a[n], i, sum = 0, count = 0;
	for (i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
		if (a[i] % 2) {
			sum += a[i];
			++count;
		}
	}
	
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%.3f", sum * 1.0 / count);
	
  	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	system ("pause");
  	return(0);
}
