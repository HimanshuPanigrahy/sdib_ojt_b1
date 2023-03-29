#include<stdio.h>
int main()
{
    int a=3,b=4;
    printf("before swapping %d %d\n",a,b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("after swapping %d %d\n",a,b);
    return 0;
}