#include <stdio.h>

int main()
{
    char str[200], longest[100];
    int i = 0, j = 0, maxLen = 0, len = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(1)
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            len++;
        }
        else
        {
            if(len > maxLen)
            {
                maxLen = len;

                for(j = 0; j < len; j++)
                {
                    longest[j] = str[start + j];
                }

                longest[j] = '\0';
            }

            len = 0;
            start = i + 1;
        }

        if(str[i] == '\0')
        {
            break;
        }

        i++;
    }

    printf("Longest word: %s", longest);

    return 0;
}