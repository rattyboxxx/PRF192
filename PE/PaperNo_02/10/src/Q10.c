#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i, a[100], b[100], c[100], d[100], e[100];
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &a[i]);
		b[i] = 0;
		c[i] = 0;
		d[i] = 1;
	}
	
	int max = 0, k = 0, j;
	for (i = 0; i < 7; i++)
	{
		if (a[i] >= 100 && a[i] <= 999 && b[i] == 0)
		{
			c[k] = a[i];
			for (j = i+1; j < 7; j++)
			{
				if (a[j] == a[i])
				{
					d[k]++;
					b[j] = 1;
				}
			}
			if (max < d[k]) max = d[k];
			k++;
		}
	}

  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int z = 0;
  if (k == 0) printf("No three-digit number");
	else
	{
		for (i = 0; i < k; i++)
		{
			if (d[i] == max)
			{
				e[z] = c[i];
				z++;
			}
		}
		for (i = 0; i < z-1; i++)
		{
			for (j = i+1; j < z; j++)
			{
				if (e[i] > e[j])
				{
					int temp = e[i];
					e[i] = e[j];
					e[j] = temp;
				}
			}
		}
		for (i = 0; i < z; i++)
		i != z-1 ? printf("%d ", e[i]) : printf("%d", e[i]);
	}

  








  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
