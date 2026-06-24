#include <stdio.h>

int main()
{
    char str[100], result[100];
    int i, j, k = 0, flag;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        flag = 0;

        for(j = 0; j < k; j++)
        {
            if(str[i] == result[j])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            result[k] = str[i];
            k++;
        }
    }

    result[k] = '\0';

    printf("String after removing duplicates: %s", result);

    return 0;
}