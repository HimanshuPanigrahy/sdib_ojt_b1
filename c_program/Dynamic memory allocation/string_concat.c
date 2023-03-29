#include <stdio.h>
#include <string.h>
int main() {
   char str1[100] = "This is ", str2[] = "program";
   strcat(str1, str2);
   puts(str1);
   puts(str2);
   return 0;
}