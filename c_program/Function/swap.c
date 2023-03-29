#include<stdio.h>
void swap(int,int);
int a,b;
int main()
{
    
    a=10;
    b=20;
    printf("berfor swapping %d %d\n",a,b);
    swap(a,b);
    printf("after swapping %d %d\n",a,b);
    return 0;
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("inside function %d %d\n",a,b);
    return;
}