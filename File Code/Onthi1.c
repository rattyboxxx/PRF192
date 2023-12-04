#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Kiem tra xem chuoi co nhieu chu hoa hay chu thuong hon, roi in hoa neu so chu hoa nho hon va nguoc lai

//int main() {
//    char s[100];
//    gets(s);
//
//    int i, dem = 0;
//    for (i = 0; i < strlen(s); i++)
//    {
//        if (s[i] >= 'a' && s[i] <= 'z') dem++;
//        else dem--;
//    }
//
//    if (dem > 0)
//    {
//        for (i = 0; i < strlen(s); i++)
//        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
//    }
//    else if (dem < 0)
//    {
//        for (i = 0; i < strlen(s); i++)
//        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
//    }
//
//    printf("%s", s);
//
//    return 0;
//}


main(){
int x=5;
char c;
printf("Enter x=");
scanf("%d",&x);
printf("Calculate square?(Y/N):");
c=getchar();
if (c== 'Y'|| c== 'y')
printf("sqr=%d",x*x);
}
