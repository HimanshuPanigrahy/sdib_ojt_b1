#include<stdio.h>
int main()
{
    int a=4;
    const int *p;
    p=&a;
    printf("%d %p\n",a,p);
    ++p;
    ++*p;
    printf("%d %p\n",a,p);

}