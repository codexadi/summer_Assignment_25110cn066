#include <stdio.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
};

int main()
{
    struct Book book[10];
    int n, i, choice, id, found;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &book[i].bookId);

        printf("Book Title: ");
        scanf("%s", book[i].title);

        printf("Author Name: ");
        scanf("%s", book[i].author);
    }

    do
    {
        printf("\n----- Library Management System -----\n");
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
                    printf("\nBook ID: %d\n", book[i].bookId);
                    printf("Title: %s\n", book[i].title);
                    printf("Author: %s\n", book[i].author);
                }
                break;

            case 2:
                printf("Enter Book ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(book[i].bookId == id)
                    {
                        printf("\nBook Found\n");
                        printf("Book ID: %d\n", book[i].bookId);
                        printf("Title: %s\n", book[i].title);
                        printf("Author: %s\n", book[i].author);

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
                printf("Invalid choice.\n");
        }

    } while(choice != 3);

    return 0;
}