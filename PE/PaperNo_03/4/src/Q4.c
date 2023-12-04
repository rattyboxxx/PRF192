#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n, m, c; scanf("%d %d %d", &m, &n, &c);
	int i = m, j;
	
	
	
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	while (i <= n) {
		for (j = 0; j < c; ++j) {
			printf("%d ", i++);
			if (i > n) break;
		}
		printf("\n");
	}
	
  	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	system ("pause");
  	return(0);
}
