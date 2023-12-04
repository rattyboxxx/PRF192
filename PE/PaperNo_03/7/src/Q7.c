#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n; scanf("%d", &n);
	int i, j, a[n][n], maxi = -999;
	for (i = 0; i < n; ++i) {
		for (j = 0; j < n; ++j) {
			scanf("%d", &a[i][j]);
			if (i == j) {
				maxi = maxi < a[i][j] ? a[i][j] : maxi;
			}
		}
	}
	
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%d", maxi);
	
  	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	system ("pause");
  	return(0);
}
