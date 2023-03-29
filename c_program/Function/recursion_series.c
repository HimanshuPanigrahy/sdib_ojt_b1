#include<stdio.h>

int display(int);

int main()
{
      int n=10;
      display(n);
  return 0;  
}

int display(int num)
{
      if(num)
            return;
      else
            display(num+1);
      printf("%d ",num);
}