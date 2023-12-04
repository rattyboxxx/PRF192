#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n; scanf("%d", &n);
  int a[100], b[100], i, k = 0;
  for (i = 0; i < n; i++)
  {
  	scanf("%d", &a[i]);
  	if (a[i] % 2 && (i+1) % 2)
  	{
  		b[k] = a[i];
  		k++;
	}
  }
  
  int j;
  for (i = 0; i < k-1; i++)
  {
  	for (j = i+1; j < k; j++)
  	if (b[i] > b[j])
  	{
  		int temp = b[i];
  		b[i] = b[j];
  		b[j] = temp;
	}
  }


  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (i = 0; i < k; i++)
  i != k-1 ? printf("%d\n", b[i]) : printf("%d", b[i]);








  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
