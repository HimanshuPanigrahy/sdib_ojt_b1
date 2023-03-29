#include<stdio.h>
int prime(int);
int main()
{
    int n;
    printf("Enter a num:");
    scanf("%d",&n);
    prime(n);
}
int prime(int n)
{
    int i=1, c=0;
    while(i<=n)
    {
         if(n%i==0)
         c++;
         i++;
    }
    if(c>2)
    {
        printf("Not a prime number");
    }
    else{
        printf("Is a prime number");
    }
}

