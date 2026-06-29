#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item[10];
    int n, i, choice, id, found;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Item %d\n", i + 1);

        printf("Item ID: ");
        scanf("%d", &item[i].id);

        printf("Item Name: ");
        scanf("%s", item[i].name);

        printf("Quantity: ");
        scanf("%d", &item[i].quantity);

        printf("Price: ");
        scanf("%f", &item[i].price);
    }

    do
    {
        printf("\n----- INVENTORY MANAGEMENT SYSTEM -----\n");
        printf("1. Display All Items\n");
        printf("2. Search Item by ID\n");
        printf("3. Update Quantity\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nItem Records:\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nItem ID   : %d\n", item[i].id);
                    printf("Name      : %s\n", item[i].name);
                    printf("Quantity  : %d\n", item[i].quantity);
                    printf("Price     : %.2f\n", item[i].price);
                }
                break;

            case 2:
                printf("Enter Item ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(item[i].id == id)
                    {
                        printf("\nItem Found\n");
                        printf("Item ID   : %d\n", item[i].id);
                        printf("Name      : %s\n", item[i].name);
                        printf("Quantity  : %d\n", item[i].quantity);
                        printf("Price     : %.2f\n", item[i].price);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Item not found.\n");
                }
                break;

            case 3:
                printf("Enter Item ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(item[i].id == id)
                    {
                        printf("Enter new quantity: ");
                        scanf("%d", &item[i].quantity);

                        printf("Quantity updated successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Item not found.\n");
                }
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 4);

    return 0;
}