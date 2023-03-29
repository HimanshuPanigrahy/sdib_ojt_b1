#include<stdio.h>
int main()
{
    int weekday;
    printf("Enter the weekday number: ");
    scanf("%d",&weekday);
    switch(weekday)
    {
        case 1:
        printf("weekday is sunday");
        break;
        case 2:
        printf("weekday is monday");
        break;
        case 3:
        printf("weekday is tuesday");
        break;
        case 4:
        printf("weekday is wenesday");
        break;
        case 5:
        printf("weekday is thursday");
        break;
        case 6:
        printf("weekday is friday");
        break;
        case 7:
        printf("weekday is saturday");
        break;
        default: 
        printf("Invalid day number");
    }
    return 0;
}