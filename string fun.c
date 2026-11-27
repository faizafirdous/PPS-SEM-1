#include <stdio.h>
#include <string.h>
void main ()
{
char s1[20],s2[20];
printf("enter a first string");
gets(s1);
printf("enter a second string");
gets(s2);
puts(s1);
puts(s2);
printf("\n length= %d",strlen(s1));
printf("\n concatenation %s",strcat(s1,s2));
printf("\n copy s2 in s1 = %s",strcpy(s1,s2));
printf("comparision %d",strcmp(s1,s2));
}
