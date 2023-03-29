#include<stdio.h>
struct arith
{
    int a,b;
    int (*fnptr)(int,int);
};
int addition(int x,int y)
{
    return x+y;
}
int subtraction(int x,int y)
{
    return x-y;
}
int main()
{
    struct arith add,sub;
    add.a=10;
    add.b=20;
    printf("Enter 2 numbers ");
    scanf("%d %d", &add.a,&add.b);
    add.fnptr=addition;
    sub=add;

    printf("addition of two numbers is\n");
    printf("%d \n",add.fnptr(add.a,add.b));
    
    return 0;
}
