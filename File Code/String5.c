#include <stdio.h>
#include <string.h>

// Dem so lan xuat hien cua cac chu cai trong chuoi
int main()
{
	char a[100], c[100];
	int b[100], d[100];
	printf("Input string: ");
	gets(a);
	
	int i;
	for (i = 0; i < strlen(a); i++)
	{
		b[i] = 0;
		d[i] = 1;
	}
	
	int j, k = 0;
	for (i = 0; i < strlen(a); i++)
	{
		if (b[i] == 0 && a[i] != ' ')
		{
			c[k] = a[i];
			for (j = i+1; j < strlen(a); j++)
			{
				if (a[j] == a[i])
				{
					d[k]++;
					b[j] = 1;
				}	
			}
			k++;	
		}
	}
	
	// Sap xep tan suat
	char tmp_c; int tmp_i;
	for (i = 0; i < k-1; i++) {
		for (j = i+1; j < k; j++) {
			if (d[i] > d[j]) {
				tmp_c = c[i];
				c[i] = c[j];
				c[j] = tmp_c;
				tmp_i = d[i];
				d[i] = d[j];
				d[j] = tmp_i;
			}
			else if (d[i] == d[j] && c[i] > c[j]) {
				tmp_c = c[i];
				c[i] = c[j];
				c[j] = tmp_c;
				tmp_i = d[i];
				d[i] = d[j];
				d[j] = tmp_i;
			}
		}
	}
	
	printf("Characters: \t");
	for (i = 0; i < k; i++)
	printf("%3c", c[i]);
	printf("\n");
	printf("Frequency: \t");
	for (i = 0; i < k; i++)
	printf("%3d", d[i]);
	
	return 0;
}
