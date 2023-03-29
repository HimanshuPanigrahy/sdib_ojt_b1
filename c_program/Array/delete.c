#include<stdio.h>
int main()
{
    int ar[5]={1,3,5,7,9};
    int pos;
    printf("Enter the number to be deleted");
    scanf("%d",&pos);
    /*for(int i=0;i<5;i++)
    {
        if(ar[i]!=pos)
        {
            printf("Element doesn't exist in the array");            
        }
    }*/
    for(int i=pos;i<5;i++)
    {
        ar[i]=ar[i+1];
       
    }
    for(int i=0;i<5;i++)
         printf("%d \n",ar[i]);
}