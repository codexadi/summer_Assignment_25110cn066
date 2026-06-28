#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact contact[10];
    int n, i, choice, found;
    char searchName[50];

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Contact %d\n", i + 1);

        printf("Name: ");
        scanf("%s", contact[i].name);

        printf("Phone Number: ");
        scanf("%s", contact[i].phone);
    }

    do
    {
        printf("\n----- Contact Management System -----\n");
        printf("1. Display All Contacts\n");
        printf("2. Search Contact by Name\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nContact List:\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nName : %s\n", contact[i].name);
                    printf("Phone: %s\n", contact[i].phone);
                }
                break;

            case 2:
                printf("Enter name to search: ");
                scanf("%s", searchName);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(strcmp(contact[i].name, searchName) == 0)
                    {
                        printf("\nContact Found\n");
                        printf("Name : %s\n", contact[i].name);
                        printf("Phone: %s\n", contact[i].phone);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Contact not found.\n");
                }
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 3);

    return 0;
}