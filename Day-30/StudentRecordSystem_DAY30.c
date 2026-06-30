#include <stdio.h>

int main()
{
    int roll[10];
    char name[10][50];
    float marks[10];
    int n, i, choice, searchRoll, found;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    do
    {
        printf("\n----- STUDENT RECORD SYSTEM -----\n");
        printf("1. Display All Records\n");
        printf("2. Search Student by Roll Number\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nStudent Records:\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nRoll Number : %d\n", roll[i]);
                    printf("Name        : %s\n", name[i]);
                    printf("Marks       : %.2f\n", marks[i]);
                }
                break;

            case 2:
                printf("Enter Roll Number: ");
                scanf("%d", &searchRoll);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(roll[i] == searchRoll)
                    {
                        printf("\nStudent Found\n");
                        printf("Roll Number : %d\n", roll[i]);
                        printf("Name        : %s\n", name[i]);
                        printf("Marks       : %.2f\n", marks[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Student not found.\n");
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