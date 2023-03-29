#include<stdio.h>
int main()
{
    int num=returns(sizeof(float));
    printf("value is %d",++num);
    return 0;

}
int returns(int returns)
{
    returns+=50;
    return(returns);
}