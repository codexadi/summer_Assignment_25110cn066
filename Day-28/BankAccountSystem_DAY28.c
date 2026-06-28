#include <stdio.h>

struct Account
{
    int accountNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account acc;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &acc.accountNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    do
    {
        printf("\n----- Bank Account System -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display Account Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Current Balance: %.2f\n", acc.balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                acc.balance = acc.balance + amount;
                printf("Deposit Successful.\n");
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= acc.balance)
                {
                    acc.balance = acc.balance - amount;
                    printf("Withdrawal Successful.\n");
                }
                else
                {
                    printf("Insufficient Balance.\n");
                }
                break;

            case 4:
                printf("\nAccount Number : %d\n", acc.accountNo);
                printf("Account Holder : %s\n", acc.name);
                printf("Balance        : %.2f\n", acc.balance);
                break;

            case 5:
                printf("Thank you for using the Bank Account System.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 5);

    return 0;
}