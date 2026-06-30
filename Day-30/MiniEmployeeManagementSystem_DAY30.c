#include <stdio.h>

int main()
{
    int empId[10];
    char name[10][50];
    float salary[10];
    int n, i, choice, id, found;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Employee Name: ");
        scanf("%s", name[i]);

        printf("Salary: ");
        scanf("%f", &salary[i]);
    }

    do
    {
        printf("\n----- MINI EMPLOYEE MANAGEMENT SYSTEM -----\n");
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
                    printf("\nEmployee ID   : %d\n", empId[i]);
                    printf("Name          : %s\n", name[i]);
                    printf("Salary        : %.2f\n", salary[i]);
                }
                break;

            case 2:
                printf("Enter Employee ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(empId[i] == id)
                    {
                        printf("\nEmployee Found\n");
                        printf("Employee ID   : %d\n", empId[i]);
                        printf("Name          : %s\n", name[i]);
                        printf("Salary        : %.2f\n", salary[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee not found.\n");
                }
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 3);

    return 0;
}