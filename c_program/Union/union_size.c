#include<stdio.h>
#pragma pack(1)
struct student
{
    unsigned int id:4;
    
    char name:1;
};s={10,"A"};
int main()
{
    struct student s={10,"A"};
    printf("%d",sizeof(s));
    printf("%d",&s);    // address of the structure variable
    printf("%d",&s.id); //cannot take address of bit field error

}