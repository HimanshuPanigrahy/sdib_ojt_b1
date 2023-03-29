#include<stdio.h>

int main()
{
    int student[10];
    int i;
    printf("Enter the student id");
    for(i=0;i<10;i++)
    {
        scanf("%d",&student[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",student[i]);
    }
    return 0;
}