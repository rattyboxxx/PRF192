#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	double a, b, c; scanf("%lf %lf %lf", &a, &b, &c);
	
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%.2lf", (c + b) / a);
	
  	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	system ("pause");
  	return(0);
}
