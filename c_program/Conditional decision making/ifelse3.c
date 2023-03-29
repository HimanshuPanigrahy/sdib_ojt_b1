#include<stdio.h>
int main()
{
    int a=10,b=2,temp;
    printf("%d %d \n",a,b);
    if(a>b)
    {
        a=1;
        b=2;
    }
    else
    {
        a=10;
        b=20;
    }
    printf("%d %d",a,b);
    return 0;
}