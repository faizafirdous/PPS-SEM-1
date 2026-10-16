#include <stdio.h>
int fact(intn);
void main ()
{
int n,f;
printf("enter value");
scanf("%d",&n);
f=fact(n);
printf("fact=%d",f);
}
int fact(n)
{
inti,f=1;
for (i=n;i>=1;i--)
{
f=f*i;
}
return 1;
}
}
