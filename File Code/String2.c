#include <stdio.h>
#include <string.h>

char chuoi[50];

// Do Cong Hung -> Hung Do Cong
char *doi1(char s[50])
{
    int i = 0, n;
    char tam[10], ten[50];

    n = strlen(s) - 1;
    while (s[n] != ' ') // Tim ten duoi cung
    {
        tam[i++] = s[n];
        n--;
    }

    tam[i++] = '\0';
    s[n] = '\0';

    strcpy(ten, strrev(tam)); // Ghep nguoc len tren
    strcat(ten, " ");
    strcat(ten, s);
	strcpy(s, ten);
    return s;
}

// Do Cong Hung -> Hung Cong Do
char *doi2(char s1[100]) {
	char reverse[100] = "";
	char temp[50];
	int i, j, n;
	n = strlen(s1);
	
	i = n-1;
	
//	while (i >= 0) {
//		j = 0;
//		while (s1[i] != ' ') {
//			temp[j++] = s1[i--];
//		}
//		temp[j] = '\0';
//		printf("\n%s", temp);
//		strcat(reverse, strrev(temp));
//		strcat(reverse, " ");
//		while (s1[i] == ' ') --i;
//	}
//	strcpy(s1, reverse);
	
	for(i = n-1; i >= 0; --i)
	{
		for(j = 0; i >= 0 && s1[i] != ' '; --i, ++j)
			temp[j] = s1[i];

	    temp[j] = '\0';

	    strcat(reverse, strrev(temp));
	    strcat(reverse, " ");
	}
	strcpy(s1, reverse);
	
	return s1;
}

int main()
{
	printf("Nhap chuoi: ");
	char s1[100];
	gets(s1);
	char s2[100];
	strcpy(s2, s1);
   	printf("Chuoi ban dau:\n %s", s1);
   	printf("\nChuoi sau khi da duoc dao nguoc:\n %s", doi1(s2));
   	printf("\nChuoi sau khi da duoc dao nguoc:\n %s", doi2(s1));
   	return 0;
}
