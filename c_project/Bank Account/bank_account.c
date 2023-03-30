#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PASSWORD_LENGTH 20

typedef struct 
{
    char name[30];
    float balance;
}Account;

void create_account (Account* account)
{
    printf("\nEnter account name: ");
    scanf("%s", account->name);
    printf("Enter initial balance: ");
    scanf("%f", &account->balance);
    printf("Account created successfully");
}

void deposit (Account* account)
{
    float amount;
    printf("\nEnter deposit amount: ");
    scanf("%f",&amount);
    account->balance += amount;
    printf("Deposit of %.2f successful. \n", amount);
    printf("Balance: %.2f\n", account->balance);
}

void withdraw (Account* account)
{
    float amount;
    printf("\nEnter withdrawal amount: ");
    scanf("%f",&amount);
    if(amount>account->balance)
    {
        printf("Insufficient balance. \n");
    }
    else
    {
        account->balance -= amount;
        printf("Withdrawal of %f.2 successful. \n",amount);
        printf("Balance: %.2f\n", account->balance);
    }
}

void save_account(Account* account, char* filename)
{
    FILE* file = fopen(filename, "wb");
    if(file == NULL)
    {
        printf("Error opening file. \n");
        return;
    }
    fwrite(account, sizeof(Account),1,file);
    fclose(file);
}

void load_account(Account* account, char* filename)
{
    FILE* file = fopen(filename, "rb");
    if(file == NULL)
    {
        printf("Error opening file. \n");
        return;
    }
    fread(account,sizeof(Account),1,file);
    fclose(file);
}

void display_account(Account* account)
{
    // FILE* file = fopen(filename, "rb");
    // if(file == NULL)
    // {
    //     printf("Error opening file. \n");
    //     return;
    // }
    printf("Name: %s\n",account->name);
    printf("Balance: %.2f\n", account->balance);   
    //fclose(file);
}

int main()
{
    Account account;
    char password[MAX_PASSWORD_LENGTH];
    char input_password[MAX_PASSWORD_LENGTH];
    int ch=0;

    printf("Enter Name: ");
    char name[100];
    scanf("%s",name);
    
    printf("Enter password: ");
    scanf("%s",password);

    load_account(&account,name);

    while(1)
    {
        printf("\nWelcome to the Bank of Phytec\n");
        printf("1.Create Account\n");
        printf("2.Deposit\n");
        printf("3.Withdraw\n");
        printf("4.Check balance\n");
        printf("5.Exit\n");
        printf("\nSelect your action: ");
        scanf("%d",&ch);

        switch (ch)
        {
            case 1:
                create_account(&account);
                save_account(&account,name);
                break;
            case 2:
                printf("\nEnter Password: ");
                scanf("%s",input_password);
                if(strcmp(password,input_password) != 0)
                {
                    printf("Incorrect password: \n");
                    break;
                }
                deposit(&account);
                save_account(&account,name);
                break;
            case 3: 
                printf("\nEnter password: ");
                scanf("%s",input_password);
                if(strcmp(password,input_password) != 0)
                {
                    printf("Incorrect password: \n");
                    break;
                }
                withdraw(&account);
                save_account(&account,name);
                break;
            case 4:
                printf("\nEnter password: ");
                scanf("%s",input_password);
                if(strcmp(password,input_password)!=0)
                {
                    printf("Incorrect password\n");
                    break;
                }
                display_account(&account);
                break;
            case 5:
                printf("\nThank You for using phytec bank");
                return 0;
            default:
                printf("\nInvalid choice");
                break;
        }
    }
    return 0;
}