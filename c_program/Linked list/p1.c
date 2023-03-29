#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

void push(Node** head,int A)
{
    Node* newnode=malloc(sizeof(Node));
    newnode->data=A;
    newnode->next=*head;
    *head=newnode;
}

void printList(Node* node)
{
    while(node!=NULL)
    {
        printf("%d",node->data);
        node=node->next;
    }
    printf("\n");
}

void len(Node** head)
{
    int count=0;
    Node *temp;
    temp=*head;
    while(temp->next!=0)
    {
        count++;
        temp=temp->next;
    }
    printf("%d\n",count);
}

int main()
{
    Node *list=NULL;
    Push(&list,5);
    Push(&list,7);
    Push(&list,6);
    Push(&list,9);
    printList(list);
    len(&list);
    return 0;
}