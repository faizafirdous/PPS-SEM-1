#include<stdio.h>
void main()
{
int N[3],i,m=1;
printf("enter 3 values");
for(i=0;i<3;i++)
scanf("%d",&N[i]);
for(i=0;i<3;i++)
m=m*N[i];
printf("multiplication=%d",m);
}
