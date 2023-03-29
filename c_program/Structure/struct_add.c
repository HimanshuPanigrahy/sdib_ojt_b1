#include<stdio.h>
int addition(int,int);
struct add
{
    int a,b,c;

};
int main()
{
    struct add add;
    printf("Enter the two numbers");
    scanf("%d %d",&add.a,&add.b);
    add.c=addition(add.a,add.b);
    printf("%d",add.c);
}
int addition(int a,int b)
{
    return a+b;
}