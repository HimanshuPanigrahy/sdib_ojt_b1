#include<stdio.h>

int add(int,int);
int sub(int,int);
int pro(int,int);
int div(int,int);
int main()
{
printf("Addition of two values are :%d\n",add(10,20));
printf("Subtraction of two values are :%d\n",sub(20,10));
printf("Multiplication of two values are :%d\n",pro(20,10));
printf("Division of two values are :%d\n",div(20,10));
return 0;
}

int sub(int x,int y)
{
return x-y;
}

int add(int x,int y)
{
return x+y;    
}

int pro(int x,int y)
{
return x*y;    
}

int div(int x,int y)
{
return x/y;    
}