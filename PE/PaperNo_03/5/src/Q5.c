#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n; scanf("%d", &n);
	int a[n], i, j, chan[n], le[n], c = 0, l = 0;
	for (i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
		if (a[i] % 2) le[l++] = a[i];
		else chan[c++] = a[i];
	}
	
	// sort odd array
	for (i = 0; i < l-1; ++i) {
		for (j = i; j < l; ++j) {
			if (le[i] < le[j]) {
				le[i] += le[j];
				le[j] = le[i] - le[j];
				le[i] -= le[j];
			}
		}
	}
	
	// sort even array
	for (i = 0; i < c-1; ++i) {
		for (j = i; j < c; ++j) {
			if (chan[i] > chan[j]) {
				chan[i] += chan[j];
				chan[j] = chan[i] - chan[j];
				chan[i] -= chan[j];
			}
		}
	}
	
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for (i = 0; i < c; ++i) {
		printf("%d ", chan[i]);
	}
	printf("\n");
	for (i = 0; i < l; ++i) {
		printf("%d ", le[i]);
	}
	
  	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	system ("pause");
  	return(0);
}
