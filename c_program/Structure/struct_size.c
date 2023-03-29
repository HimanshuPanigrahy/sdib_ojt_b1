#include<stdio.h>
#pragma pack(1)
struct test
{
    int height;
    int weight;
    char name;
    float age;
}t;
int main()
{
    printf("%d",sizeof(t));

}