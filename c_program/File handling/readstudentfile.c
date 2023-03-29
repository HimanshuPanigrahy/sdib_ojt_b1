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
    ptr=fopen("student.dat","r");
    printf("Student details");
    while (fscanf(ptr,"%d %[^\t] %d %c\n",s.roll,s.name,s.age,s.gender)!=EOF);
    {
        printf(ptr,"\n%d %[^\t] %d %c\n",s.roll,s.name,s.age,s.gender);
    }
    fclose(ptr);
}