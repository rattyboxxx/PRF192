#include <stdio.h>
#include<string.h>

// Dao voi ham: abbcd ef -> fe dcbba
void rev1()
{
    char name[50];

    printf("Nhap vao chuoi: ");
    fgets(name, sizeof(name), stdin);
    printf("\nTruoc khi dao nguoc:\n%s", name);
    printf("\nSau khi dao nguoc: %s", strrev(name));
}

// Dao khong ham
void rev2()
{
	char s1[50];
	printf("Nhap vao chuoi: ");
	fgets(s1, sizeof(s1), stdin);

   	int length = 0;
   	int loop = 0;

   	while(s1[length] != '\0')
	{
      	length++;
   	}

   	printf("\nIn chuoi theo chieu dao nguoc:");
   	for(loop = --length; loop>=0; loop--)
      	printf("%c", s1[loop]);

   	return 0;
}

// So sanh voi ham
void cmp1()
{
  char str1[20], str2[20];
  printf("Nhap chuoi 1: ");
  gets(str1);
  printf("Nhap chuoi 2: ");
  gets(str2);
  if (strcmp(str1, str2) == 0) {
   printf("2 chuoi bang nhau.");
  } else if (strcmp(str1, str2) > 0) {
   printf("Chuoi 1 lon hon chuoi 2");
  } else {
   printf("Chuoi 1 nho hon chuoi 2");
  }
  return 0;
}

// So sanh khong ham
void cmp2()
{
	char str1[20], str2[20];
  	printf("Nhap chuoi 1: ");
  	gets(str1);
  	printf("Nhap chuoi 2: ");
  	gets(str2);

    int i,ok = 0;
    for(i=0; i<=strlen(s); i++)
	{
		if(s[i] != s2[i]) {
        if(s[i] > s2[i])
			ok = 1;
		else
			ok = 2;
		}
    }

    if(ok == 0)
		printf("Hai chuoi bang nhau!");
	else if(ok == 1)
		printf("Chuoi s1 = %s lon hon chuoi s2 = %s!",s,s2);
	else
		printf("Chuoi s2 = %s lon hon chuoi s1 = %s!",s2,s);
}


