#include<stdio.h>
int main()
{
    int a=11;
    if(a>9)
    {
        a++;
        printf("value of a is %d", a);
    }
    else
    {
        --a;
        printf("value of a is %d", a);
    }
    return 0;
}