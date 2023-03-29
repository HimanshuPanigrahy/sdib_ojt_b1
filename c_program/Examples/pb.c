#include<stdio.h>
int main()
{
   int ram,shyam,ajay;
printf("Enter the ages of Ram, Shyam and Ajay");
scanf("%d %d %d",&ram,&shyam,&ajay);
if(ram < shyam && ram < ajay)
    {
        printf("Ram is smallest and %d year old",ram);
    }
else if(shyam < ajay)
    {
        printf("Shyam is smallestand %d year old",shyam);
    }
else
    {
        printf("Ajay is smallestand %d year old",ajay);
    }    
   return 0;
}