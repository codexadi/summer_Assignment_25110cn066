#include <stdio.h>
#include <string.h>

int main()
{
    int bookId[10];
    char title[10][50];
    char author[10][50];
    int n, i, choice, id, found;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &bookId[i]);

        printf("Book Title: ");
        scanf("%s", title[i]);

        printf("Author Name: ");
        scanf("%s", author[i]);
    }

    do
    {
        printf("\n----- MINI LIBRARY SYSTEM -----\n");
        printf("1. Display All Books\n");
        printf("2. Search Book by ID\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nBook Records:\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nBook ID    : %d\n", bookId[i]);
                    printf("Title      : %s\n", title[i]);
                    printf("Author     : %s\n", author[i]);
                }
                break;

            case 2:
                printf("Enter Book ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(bookId[i] == id)
                    {
                        printf("\nBook Found\n");
                        printf("Book ID    : %d\n", bookId[i]);
                        printf("Title      : %s\n", title[i]);
                        printf("Author     : %s\n", author[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book not found.\n");
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