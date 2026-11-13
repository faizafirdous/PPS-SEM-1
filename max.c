#include<stdio.h>
void main()
{
int M[5],i,min;
printf("enter 5 values");
for(i=0;i<5;i++)
    scanf("%d",&M[i]);
    min=M[0];
for(i=0;i<5;i++)
{
if(M[i]<min)
{
    min=M[i];
}
}
printf("min=%d",min);
}
