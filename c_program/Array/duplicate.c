#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,3,8,1,3,8,6};
    
    for (int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            int count=0;
            if(arr[i]==arr[j])
            {
                
                count++;
                printf("%d is repeated %d times \n",arr[j],count);
            }
            
        }
    }
}