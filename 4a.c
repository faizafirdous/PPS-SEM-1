#include <stdio.h>
int main(){
int n,octal=0,i=1,rem;
printf("enter decimal number");
scanf("%d",&n);
while(n!=0)
{
rem=n%8;
octal=octal+rem*i;
n=n/8;
i=i*10;
}
printf("octal=%d",octal);
return 0;
}
