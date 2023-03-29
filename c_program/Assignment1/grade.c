#include<stdio.h>
int main()
{
    int score;
    printf("Enter the total score\n",score);
    scanf("%d",&score);
    if(score>80)
    {
        printf("grade is A");
    }
    else if(score<80&&score>60)
    {
        printf("grade is B");
    }
    else if(score<60&&score>40)
    {
        printf("grade is C");
    }
    else if(score<40&&score>20)
    {
        printf("grade is D");
    }
    else
    {
        printf("Invalid input");
    }
    //return 0;
}