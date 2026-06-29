#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice, i, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    do
    {
        printf("\n----- STRING OPERATIONS -----\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Check Palindrome\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                length = strlen(str);
                printf("Length = %d\n", length);
                break;

            case 2:
                length = strlen(str);
                printf("Reversed String: ");
                for(i = length - 1; i >= 0; i--)
                {
                    printf("%c", str[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("Uppercase String: ");
                for(i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] >= 'a' && str[i] <= 'z')
                    {
                        printf("%c", str[i] - 32);
                    }
                    else
                    {
                        printf("%c", str[i]);
                    }
                }
                printf("\n");
                break;

            case 4:
            {
                int flag = 1;
                length = strlen(str);

                for(i = 0; i < length / 2; i++)
                {
                    if(str[i] != str[length - i - 1])
                    {
                        flag = 0;
                        break;
                    }
                }

                if(flag)
                    printf("String is Palindrome.\n");
                else
                    printf("String is Not Palindrome.\n");

                break;
            }

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 5);

    return 0;
}