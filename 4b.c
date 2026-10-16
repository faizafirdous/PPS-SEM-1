#include <stdio.h>
int main(){
int n,hexa=0,i=1,rem;
printf("enter decimal number");
scanf("%d",&n);
while(n!=0)
{
rem=n%16;
hexa=hexa+rem*i;
n=n/16;
i=i*10;
}
printf("hexa=%d",hexa);
return 0;
}
