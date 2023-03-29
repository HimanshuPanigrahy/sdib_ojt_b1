#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[20],ch;
    FILE *fp;
    printf("ënter the file name");
    scanf("%[^\n]",&name);
    fp=fopen(name,"r");
    printf("Vale of ob is: %d,fp");
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
    printf("\nData in %s\n",name);
    while((ch=getc(fp))!=EOF)
    {
        putchar(ch);
    }
    fclose(fp);

}