#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n; scanf("%d", &n);

  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int i, j;
  for (i = 0; i < n; i++)
  {
  	for (j = 0; j < n; j++)
  	{
  		if (i <= (n-1) / 2)
  		{
  			if (j == (n-1) / 2 + i || j == (n-1) / 2 - i) printf("*");
  			else printf(" ");
		}
  		else
  		{
  			int k = n-1-i;
  			if (j == (n-1) / 2 + k || j == (n-1) / 2 - k) printf("*");
  			else printf(" ");
		}
	}
	if (i != n-1) printf("\n");
  }
 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
