#include <stdio.h>

int main()
{
    int *p;
    int a=9;
    p=&a;
    printf("%p is address of a\n",&a);
    printf("%d is value of p\n",p);
    printf("%d is value of a\n",a);
    printf("%p is address of p\n",&p);
    return 0;
}