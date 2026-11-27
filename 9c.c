#include <stdio.h>
int main()
{
char string1[100],string2[100];
char *str1,*str2;
printf("enter the first string");
scanf("%s",string1);
printf("enter the second string");
scanf("%s",string2);
str1 = string1;
str2 = string2;
while(*str1==*str2)
{
if(*str1=='\0'||*str2=='\0')
break;
str1++;
str2++;
}
if(*str1=='\0'&&*str2=='\0')
printf("both strings are equal");
else
printf("both strings are not equal");
return 0;
}
