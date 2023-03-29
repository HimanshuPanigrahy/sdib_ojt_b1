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
    int x,y,z,s;

    fnptr=&add;                     //int fnptr(int,int)=&add;
    x=(*fnptr)(20,10);
    printf("%d\n",x);

    fnptr=&sub;                     //int fnptr(int,int)=&sub;
    y=(*fnptr)(20,10);
    printf("%d\n",y);

    fnptr=&pro;                     //int fnptr(int,int)=&pro;
    z=(*fnptr)(20,10);
    printf("%d\n",z);

    fnptr=&div;                     //int fnptr(int,int)=&div;
    s=(*fnptr)(20,10);
    printf("%d\n",s);
   
}