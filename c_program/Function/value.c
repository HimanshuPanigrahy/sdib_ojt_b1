#include<stdio.h>
//extern int r;
static int s;

int main()
{
    register int r;
    printf("%d is register",r);
    printf("%d is static",s);
}