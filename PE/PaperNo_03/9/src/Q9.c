#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n; scanf("%d", &n);
	fflush(stdin);
	char a[100][100];
	int i, j, k, count;
	for (i = 0; i < n; ++i) {
		scanf("%s", a[i]);
	}
	fflush(stdin);
	char c[100]; gets(c);
	
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for (i = 0; i < n; ++i) {
		for (j = 0; j < strlen(a[i]); ++j) {
			count = 0;
			for (k = 0; k < strlen(c); ++k) {
				if (a[i][j+k] == c[k]) ++count;
			}
			if (count == strlen(c)) {
				printf("%s\n", a[i]);
				break;
			}
		}
	}
	
  	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	system ("pause");
  	return(0);
}
