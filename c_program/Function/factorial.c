#include<stdio.h>
int fact(int);

int main()
{
    int n;
    n=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
    printf("The value of series is: %d\n\n",n);
}

int fact(int n)
{
    int i,fact=1,num;    
    for(i=1;i<=n;i++)
    {    
      fact=fact*i;    
    }    
    printf("%d",fact);    
}