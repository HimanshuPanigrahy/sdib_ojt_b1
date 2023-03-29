#include<stdio.h>
int increment(int);

int main()
{
    increment();
    increment();
    increment();
}

int increment(int count)
{
    count=0;
    count++;
    printf("%d",count);
    return count;
}