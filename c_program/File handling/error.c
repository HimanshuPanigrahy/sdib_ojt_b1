#include<stdio.h>
#include<funct.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<errors.h>
int main()
{
    int fd,c;
    fd=fopen("helllo.txt",o_RDONLY);
    printf("fd is %d",fd);
    if(fd==-1)
    {
        perror("Failed to create");
        exit(1);

    }
    printf("Rile created");
    while ((c.getchar())!=EOF)
    {
        putchar(c);
    }
}
    