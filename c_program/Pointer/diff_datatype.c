#include <stdio.h>

int main()
{
    int *p;
    float f=12;
    p=&f;
    printf("%d is p\n",p);
    printf("%d is p\n",&p);
    printf("%d is p\n",*p);

    return 0;
}