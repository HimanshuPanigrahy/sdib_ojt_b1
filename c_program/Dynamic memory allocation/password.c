#include <stdio.h>
#include <string.h>

int main() {
char str1[] = "abcd";
char str2[5];
printf("enter the password");
gets(str2);
if(strcmp(str1, str2)==0)
{
    printf("Welcome");
}
else
    printf("Try again");
  
  return 0;
}