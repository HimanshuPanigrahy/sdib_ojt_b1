#include <stdio.h>
int main()
{
    int n = 4;
    int *ptr1;
    ptr1 = &n;
    printf("Pointer before Increment: ");
    printf("%p \n", ptr1);
    printf("value before increment: ");
    printf("%p \n",*ptr1);
    ptr1++;
    *ptr1++;
    printf("pointer after increment: ");
    printf("%p \n",ptr1);
    printf("value after increment: ");
    printf("%p \n",*ptr1);
    return 0;

}