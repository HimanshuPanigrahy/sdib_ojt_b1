#include<stdio.h>
int add(int,int);
int sub(int,int);
int pro(int,int);
int div(int,int);

int main()
{
    int a,b;
    a=10;
    b=20;
    int c;

    //printf("Enter 2 nos ");
    //scanf("%f %f",&a,&b);
     c=add(a,b);
     c=sub(a,b);
     c=pro(a,b);
     c=div(a,b);

    printf("%d is the sum\n",c);
    printf("%d is the subtraction\n",c);
    printf("%d is the product\n",c);
    printf("%d is the division\n",c);
    return 0;
}

int add(int p, int q)
{
    int sum=p+q;
    return sum;
}

int sub(int p, int q)
{
    int diff=p-q;
    return diff;
}

int pro(int p, int q)
{
    int multi=p*q;
    return multi;
}

int div(int p, int q)
{
    int sep=p/q;
    return sep;
}