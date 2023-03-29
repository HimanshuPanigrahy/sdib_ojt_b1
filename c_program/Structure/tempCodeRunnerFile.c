#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[30];
    int roll;
    char gender[10];
    
};
int main()
{
    struct student s;
    s.id=2022;
    s.roll=14;
    strcpy(s.name,"HIMANSHU");
    strcpy(s.gender,"M");
    printf("id is : %d\n",s.id);
     printf("roll is : %d\n",s.roll);
      printf("name is : %s\n",s.name);
       printf("gender is : %s\n",s.gender);
    return 0;
}