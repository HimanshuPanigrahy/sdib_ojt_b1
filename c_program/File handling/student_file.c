#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
    int roll,age;
    char name[20],gender;
}student;

int main()
{
    char ch;
    student s;
    FILE *ptr;
    ptr=fopen("student.dat","w");
    printf("Enter student detail\n");
    while(1)
    {
        printf("Tnter roll no\n");

        scanf("%d",&s.roll);
        printf("Enter the name\n");
        scanf(" %[^\n]",&s.name);
        printf("Enter the age\n");
        scanf("%d",&s.age);
        printf("Enter the gender\n");
        scanf(" %c",&s.gender);
        printf("Do you want to continue (y/n)\n");
        scanf(" %c",&ch);
        fprintf(ptr,"\n%4d %s %d %c\n",s.roll,s.name,s.age,s.gender);
        if(ch=='n'||ch=='N')
            break;
    }
    fclose(ptr);
}