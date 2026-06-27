#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[10];
    int n, i, choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    do
    {
        printf("\n----- Student Record Management -----\n");
        printf("1. Display All Records\n");
        printf("2. Search by Roll Number\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nStudent Records:\n");
                for(i = 0; i < n; i++)
                {
                    printf("\nRoll Number: %d\n", s[i].roll);
                    printf("Name: %s\n", s[i].name);
                    printf("Marks: %.2f\n", s[i].marks);
                }
                break;

            case 2:
            {
                int roll, found = 0;

                printf("Enter roll number to search: ");
                scanf("%d", &roll);

                for(i = 0; i < n; i++)
                {
                    if(s[i].roll == roll)
                    {
                        printf("\nRecord Found\n");
                        printf("Roll Number: %d\n", s[i].roll);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Record not found.\n");
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