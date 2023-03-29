#include<stdio.h>
int a=10,b=20;
int main()
{
    int temp;
    printf("Before swap %d  %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swap %d  %d\n",a,b);
}