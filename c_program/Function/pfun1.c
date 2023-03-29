#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0;
    i++;
    if(i<=5)
    {
        printf("Welcome");
        exit(1);
        main();
    }
    return 0;
}