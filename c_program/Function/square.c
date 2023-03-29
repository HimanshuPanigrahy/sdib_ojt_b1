#include<stdio.h>
int square(int);

int main()
{
    int n,sqr;
    printf("Enter the number ");
    scanf("%d",&n);
    sqr = square(n);
    printf("The square of %d is %d",n,sqr);
    return 0;
}

int square(int a)
{
    return a*a;
}