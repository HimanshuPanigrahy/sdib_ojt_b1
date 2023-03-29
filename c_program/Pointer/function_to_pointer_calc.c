#include<stdio.h>

int (*fnptr)(int,int);


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
    int a=10,b=5,choice;
    printf("Enter the choice of operation \n 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division");
    scanf("%d",&choice);
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    int sum,diff,mul,sep;
    switch (choice)
    {
    case 1:
        fnptr=&add;
        sum=(*fnptr)(a,b);   
        printf("%d\n",sum);
        break;
    case 2:
       fnptr=&sub;
    diff=(*fnptr)(a,b);
    printf("%d\n",diff);
        break;
    case 3:
        fnptr=&add;
        mul=(*fnptr)(a,b);
        printf("%d\n",mul);
        break;
    case 4:
        fnptr=&add;
        sep=(*fnptr)(a,b);
        printf("%d\n",sep);
        break;
    
    default:
    printf("Invalid input");
    //break;
    }
    
   
}