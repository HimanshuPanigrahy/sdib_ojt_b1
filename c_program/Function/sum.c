#include<stdio.h>
int add(int, int);
int main()
{
    int a,b;
    printf("Enter 2 nos ");
    scanf("%d %d",&a,&b);
    int c=add(a,b);
    printf("%d is the sum\n",c);
    return 0;
}
int add(int p, int q)
{
    int result=p+q;
    return result;
}