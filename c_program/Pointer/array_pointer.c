#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *p;
    p=&a;
    p++;
    printf("%d\n",*p+2);

    return 0;
}