#include<stdio.h>
//#include<unixio.h>
void disp();
int main()
{
    int a=10,b=10;
    printf("Filename, %s",__FILE__);
    printf("Line, %d",__LINE__);
    printf("Function, %s",__func__);
    disp();
    printf("Date, %s",__DATE__);
    printf("Standard c, %d",__STDC__);
}
void disp()
{
    printf("present functin is %s", __FUNCTION__);
}