#include <stdio.h>

int main()
{
    int arr[100], n, i, choice;
    int sum, largest, smallest;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n----- ARRAY OPERATIONS -----\n");
        printf("1. Display Array\n");
        printf("2. Find Sum\n");
        printf("3. Find Average\n");
        printf("4. Find Largest Element\n");
        printf("5. Find Smallest Element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                {
                    sum += arr[i];
                }
                printf("Sum = %d\n", sum);
                break;

            case 3:
                sum = 0;
                for(i = 0; i < n; i++)
                {
                    sum += arr[i];
                }
                printf("Average = %.2f\n", (float)sum / n);
                break;

            case 4:
                largest = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] > largest)
                    {
                        largest = arr[i];
                    }
                }
                printf("Largest Element = %d\n", largest);
                break;

            case 5:
                smallest = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] < smallest)
                    {
                        smallest = arr[i];
                    }
                }
                printf("Smallest Element = %d\n", smallest);
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 6);

    return 0;
}