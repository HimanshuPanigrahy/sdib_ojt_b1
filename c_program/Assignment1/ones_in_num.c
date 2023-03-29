#include<stdio.h>
int main()
{
    int num,temp,count=0;
    printf("Enter the number %d\n",num);
    scanf("%d",&num);
    while(num>0)
    {
        temp=num%10;
        if(temp==1)
        {
            count=count+1;
        }
        else
        {
            num=num/10;
        }
    }
    printf("Number of 1s in the given number is %d\n",count);
    return 0;
}