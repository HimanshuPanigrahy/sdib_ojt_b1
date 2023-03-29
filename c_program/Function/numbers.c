#include<stdio.h>
int main()
{
    register int n;
    printf("Enter the max reach");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d \n",i);
    }
}                          