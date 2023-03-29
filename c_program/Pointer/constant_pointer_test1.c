#include<stdio.h>
int main()
{
    const int a=4;
    int *p;
    p=&a;
    printf("%d %p\n",a,p);
    ++p; 
    ++*p;
    printf("%d %p\n",a,p);

}