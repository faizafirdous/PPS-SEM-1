#include <stdio.h>
int sum(int n);

int main()
{
int n,s;
printf("enter the number");
scanf("%d,&n");
s=sum(n);
printf("sum of n mumber=%d",s);
return 0;
}
int sum (int n)
{
if (n==0)
return 0;
else
return n+sum(n-1);
}
