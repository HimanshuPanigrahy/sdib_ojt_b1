#include<stdio.h>
int main()
{
    int a=3;
    int b=2;
    printf("before swapping %d, %d\n", a,b);
    a=a+b; 
    b=a-b;
    a=a-b;
    printf("after swapping %d, %d\n",a,b);
}