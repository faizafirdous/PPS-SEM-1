#include<stdio.h>
int main()
{
    int a=150;
    int *p=&a;
    int **q=&p;
    printf("values of a=%d\n",a);
    printf("vales using p=%d\n",*p);
    printf("values using q=%d\n",**q);
    return 0;
}
