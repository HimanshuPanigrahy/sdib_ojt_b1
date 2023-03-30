#include <stdio.h>
#include <string.h>

struct employee
{
    int emp_id;
    char name[10];
    int basic, da;
    int gross;
};

struct employee emp[50];
int employ_count = 0;

void add_employee()
{

    if (employ_count == 50)
    {
        printf("Cannot add more employees, vacancy is full");
        return;
    }

    printf("Enter employee ID: ");
    scanf("%d", &emp[employ_count].emp_id);
    printf("Enter name: ");
    scanf("%s", emp[employ_count].name);
    printf("Enter Basic Salary: ");
    scanf("%d", &emp[employ_count].basic);
    printf("Enter DA: ");
    scanf("%d", &emp[employ_count].da);
    printf("\n");

    emp[employ_count].gross = emp[employ_count].basic - emp[employ_count].da;

    employ_count++;

    printf("Press enter to go to Main Menu\n");
    //getch();
    
}

void search_employee()
{
    char name[20];
    int found = 0;
    printf("Enter the employee name to search");
    scanf("%s", name);
    for (int i = 0; i < employ_count; i++)
    {
        if (strcmp(emp[i].name, name) == 0)
        {
            printf("Employee ID: %d\n Name: %s\n Basic Salary: %d\n DA: %d\n Gross Salary: %d", emp[i].emp_id, emp[i].name, emp[i].basic, emp[i].da, emp[i].gross);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Employee not found");
    }

    printf("Press enter to go to Main Menu\n");
    getch();
   
}

void view_employee()
{
    printf("Employees");
    for (int i = 0; i < employ_count; i++)
    {
        printf("Employee ID: %d\n", emp[i].emp_id);
        printf("Name: %s\n", emp[i].name);
        printf("Basic Salary: %d\n", emp[i].basic);
        printf("DA: %d\n", emp[i].da);
        printf("Gross Salary: %d\n", emp[i].gross);
        printf("\n)");
    }

    printf("Press enter to go to Main Menu\n");
    getch();
   
}



void menu()
{
    int ch = 0;
    do
    {
        printf("------------------------\n");
        printf("       Main Menu      \n");
        printf("------------------------\n");
        printf("Enter your choice\n");
        printf("\n");
        printf("1. Add employee details\n");
        printf("2. View employees\n");
        printf("3. Search employee\n");
        printf("4. Exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            add_employee();
            break;
        case 2:
            view_employee();
            break;
        case 3:
            search_employee();
            break;
        case 4:
            printf("Thank you");
            exit(1);
            break;
        default:
            printf("Wrong input, please choose from the given options");
        }
    } while (ch != 0);
}

int main()
{
    menu();
}