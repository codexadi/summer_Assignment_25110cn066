#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count, maxCount = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        count = 0;

        for(j = 0; str[j] != '\0' && str[j] != '\n'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }

        if(count > maxCount)
        {
            maxCount = count;
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character = %c\n", maxChar);
    printf("Frequency = %d", maxCount);

    return 0;
}