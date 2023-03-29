#include<stdio.h>
struct addition
{
    int a,b,c;

};
struct addition add(struct addition a)
{
    a.c=a.a+a.b;
    printf("%d",a.c);
}
int main()
{
    struct addition a;
    printf("Enter two nos");
    scanf("%d %d",&a.a,&a.b);
    a=add(a);
    //printf("%d",z);

}
