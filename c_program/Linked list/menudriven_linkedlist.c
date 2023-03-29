#include <stdio.h>
//#include <stdlib.h>
#include "linked_header.h"
void insertion();
void deletion();

struct node *head = NULL;
struct node *second = NULL;

struct node
{
    int data;
    struct node *next;
};

int main()
{
 while(1)
 {
  driver();
 }
  return 0;
}

void driver()
{
    int menu;
    // menu_driven start here
    printf("LINKED LIST\n");
    printf("--------------\n");
    printf("1:Insertion\n");
    printf("2:Deletion\n");
    printf("3:Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        insertion();
        break;
    case 2:
        deletion();
        break;
    case 3:
        exit(0);
        break;    
    default:
        printf("invalid input");
    }
}
void insertion()
{
    int insert_menu;
    printf("\n>INSERTION\n");
    printf("----------------\n");
    printf("1:At Beginning\n");
    printf("2:At Specific loacation\n");
    printf("3:At End\n");
    printf("Where you wanna insert:");
    scanf("%d", &insert_menu);
    switch (insert_menu)
    {
    case 1:
        at_beginning_in();
        break;
    case 2:
        at_position_in();
        break;
    case 3:
        at_end_in();
        break;
    default:
        printf("invalid input");
        break;
    }
}

void deletion()
{
    int delete_menu;
    printf("\n>DELETION\n");
    printf("--------------\n");
    printf("1:At Beginning\n");
    printf("2:At Specific loacation\n");
    printf("3:At End\n");
    printf("Where you wanna delete: ");
    scanf("%d", &delete_menu);
    switch (delete_menu)
    {
    case 1:
        at_beginning_del();
        break;
    case 2:
        at_position_del();
        break;
    case 3:
        at_end_del();
        break;
    default:
        printf("invalid input");
        break;
    }
}


