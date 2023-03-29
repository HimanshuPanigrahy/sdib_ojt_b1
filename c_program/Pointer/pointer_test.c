#include<stdio.h>
int main()
{
int arr[1];
   int *ptr;
   int (*ptr1)[1];
  ptr = arr;
  ptr1 = &arr;
 printf("%p\n",ptr);
 printf("%p\n",ptr1);
}