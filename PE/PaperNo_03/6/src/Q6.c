#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char s[100]; gets(s);
	char c; scanf("%c", &c);
	int count = 0, i;
	for (i = 0; i < strlen(s); ++i) {
		if (s[i] == c) ++count;
	}
	
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	if (count) printf("%d", count); else printf("Character \'%c\' not found", c);
	
  	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	system ("pause");
  	return(0);
}
