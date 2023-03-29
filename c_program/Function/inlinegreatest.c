#include<stdio.h>
int greatest(int,int);

int main()
{
    int a=10,b=20;
    greatest(a,b);
}

inline int greatest(int a,int b)
{
    if(a>b)
        printf("greatest is %d\n",a);
    else 
        printf("greatest is %d\n",b);
}