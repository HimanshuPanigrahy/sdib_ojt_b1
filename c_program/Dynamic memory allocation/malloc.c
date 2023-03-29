#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i,*temp;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf(stderr,"Memory is not allocated");
        exit(i);
    }
    printf("Memory is allocated at :%x",p);
    for(i=0;i<n;i++)
    {
        p[i]=i+1;
        printf("\n");
    }
    for(i=0;i<n;i++)
    printf("%d",p[i]);
    printf("\n");
    temp=realloc(p,(n*sizeof(int))+10);
    p=temp;
    n+=10;
    for(i=0;i<n;i++)
    printf("%d",p[i]);
    printf("\n");

}