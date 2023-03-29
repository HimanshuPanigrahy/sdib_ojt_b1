#include <stdio.h>  

int compare(char[],char[]);  
int concat(char[],char[]);

int main()  
{  
    char str1[20];  
    char str2[20];  
    printf("Enter the first string : ");  
    scanf("%s",str1); 

    int l;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        l++;
    }
    printf("Length of the string 1 is: %d",l);

    printf("Enter the second string : ");  
    scanf("%s",str2);  

    int m;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        m++;
    }
    int c= compare(str1,str2);  
    if(c==0)  
        printf("strings are same");  
    else  
        printf("strings are not same");  
  
    concat(str1,str2);
    printf("String after concatenation %s",str1);

    return 0;  
}  
  
int compare(char a[],char b[])  
{  
    int flag=0,i=0;   
    while(a[i]!='\0' &&b[i]!='\0') 
    {  
       if(a[i]!=b[i])  
       {  
           flag=1;  
           break;  
       }  
       i++;  
    }  
    if(flag==0)  
    return 0;  
    else  
    return 1;  
}  

int concat(char str1[],char str2[])
{
    int i=0,j=0;
  printf("\nEnter First String:");
  gets(str1);
  printf("\nEnter Second String:");
  gets(str2);
  while(str1[i]!='\0')
  i++;
  while(str2[j]!='\0')
  {
    str1[i]=str2[j];
    j++;
    i++;
  }
  str1[i]='\0';
  printf("\nConcatenated String is %s",str1);
  return str1;
}