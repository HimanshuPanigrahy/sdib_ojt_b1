#include<stdio.h>
#include<string.h>
void pallindrome(char*);

int main()
{
    char s[20];
    
    printf("Enter the pallindrome");
    gets(s);
    pallindrome(s);
    return 0;

}
void pallindrome(char *s)
{
    int i,n,c=0;
    n=strlen(s);
    for (i=0;i<n/2;i++)
    {
        if(s[i]==s[n-i-1])
            c++;
    }
    if(c==1)
        printf("String is pallindrome");
    else
        printf("String is not pallindrome");
}