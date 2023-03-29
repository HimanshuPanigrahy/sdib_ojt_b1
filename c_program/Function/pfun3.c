#include<stdio.h>
int main()
    {
        int num=a(4);
        printf("%d\n",--num);
        return 0;
    }
int a(int num)
{
    return (num++);
}