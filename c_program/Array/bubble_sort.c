#include<stdio.h>

int main()
{
    int arr[10]={5,3,6,1,9,7,2,4,8};
    int i;
    for(i=0;i<10;i++)
    {
        for (int j=0;j<10-i-1;j++)
        {
        if(arr[i]<arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
       else
        return 0;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}