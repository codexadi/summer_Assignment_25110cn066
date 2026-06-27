#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[10];
    int n, i, choice;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    do
    {
        printf("\n----- Employee Management System -----\n");
        printf("1. Display All Employees\n");
        printf("2. Search Employee by ID\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEmployee Records:\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nEmployee ID: %d\n", emp[i].id);
                    printf("Name: %s\n", emp[i].name);
                    printf("Salary: %.2f\n", emp[i].salary);
                }
                break;

            case 2:
            {
                int id, found = 0;

                printf("Enter Employee ID: ");
                scanf("%d", &id);

                for(i = 0; i < n; i++)
                {
                    if(emp[i].id == id)
                    {
                        printf("\nEmployee Found\n");
                        printf("Employee ID: %d\n", emp[i].id);
                        printf("Name: %s\n", emp[i].name);
                        printf("Salary: %.2f\n", emp[i].salary);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee not found.\n");
                }

                break;
            }

            case 3:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 3);

    return 0;
}