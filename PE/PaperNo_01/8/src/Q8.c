#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n, a[100], check = 0;
  scanf("%d", &n);
  int i;
  for (i = 0; i < n; i++)
  {
  	scanf("%d", &a[i]);
  	if (a[i] % 2 == 0) check++;
  }
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (i = 0; i < n; i++)
  {
  	if (a[i] % 2 == 0)
  	{
  		printf("%d", a[i] * a[i]);
  		check--;
  		if (check != 0) printf("\n");
	}
  }








  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
