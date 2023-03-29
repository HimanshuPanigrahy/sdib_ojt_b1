#include<stdio.h>
int main()
{
    float a,b;
    int choice;
    printf("1.addition\n 2. subtraction\n 3. multiplication\n 4. division\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    
    switch(choice)
    {
        case 1:
        printf("%d",a+b);
        break;
        case 2:
        printf("%d",a-b);
        break;
        case 3:
        printf("%d",a*b);
        break;
        case 4:
        printf("%d",a/b);
        break;
        default:
        printf("Invalid input");
    }
}