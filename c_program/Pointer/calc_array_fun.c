#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int pro(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
int main()
{
    int (*funptr[])(int,int)={'+','-','*','/'};
    int a,b,ch;
    printf("Enter the choice of operation \n 0 for addition\n 1 for subtraction\n 2 for multiplication\n 3 for division");
    scanf("%d",&ch);
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    if (ch>4)
    {
        printf("Invalid choice");
    }
    (*funptr[ch])(a,b);
}