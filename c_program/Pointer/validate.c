#include <stdio.h>

int main()
{
    float *f;
    int a=8;
    f=&a;
    printf("%d is f\n",f);
    printf("%d is f\n",&f);
    printf("%d is f\n",*f);
    return 0;
}