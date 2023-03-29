#include<stdio.h>
int main()
{
    int sub1,sub2,sub3;
    float avg;
    printf("enter the scores of 3 subjects");
    scanf("%d %d %d",sub1,sub2,sub3);
    avg=(sub1+sub2+sub3)/3;
    printf("average of 3 subjects is %d",avg);
    if(sub1>30&&sub2>>30&&sub3>>30)
    {
        if(avg>=70)
        {
            printf("distinction");
        }
        else if(avg>=60)
        {
            printf("first class");
        }
        else if(avg>=50)
        {
            printf("second class");
        }
        else if(avg>=40)
        {
            printf("third class");
        }
        else 
        {
            printf("failed");
        }
    }
}