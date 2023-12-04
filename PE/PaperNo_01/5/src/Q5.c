#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	char a[100]; gets(a);
	int i;
	for (i = 0; i < strlen(a); i++)
	if (a[i-1] == ' ' || i == 0)
	{
		if (a[i] >= 'a' && a[i] <= 'z') a[i] -= 32;
	}

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%s", a);








  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
