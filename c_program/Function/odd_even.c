#include<stdio.h>
int oddeven(int);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    oddeven(n);
}

int oddeven(int n)
{
    if(n%2==0)
    printf("Even\n");
    else
    printf("Odd\n");
}