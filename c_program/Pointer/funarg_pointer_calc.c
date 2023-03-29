#include<stdio.h>

int operation(int,int,int(*fnptr)(int,int));


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
        //fnptr=&add;
        operation(a,b,add);
        break;
    case 2:
       //fnptr=&sub;
       operation(a,b,sub);
    
        break;
    case 3:
        //fnptr=&add;
        operation(a,b,pro);
       
        break;
    case 4:
        //fnptr=&add;
        operation(a,b,div);
        
        break;
    
    default:
    printf("Invalid input");
    //break;
    }
}

int operation(int a,int b,int(*fnptr)(int,int))
{
    int result;
    result=fnptr(a,b);
    printf("%d",result);
}