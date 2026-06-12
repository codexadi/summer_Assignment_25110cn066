#include <stdio.h>

int main()
{
    int a[100], n, i, j, sum;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter required sum: ");
    scanf("%d", &sum);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == sum)
            {
                printf("Pair found: %d and %d\n", a[i], a[j]);
                found = 1;
            }
        }
    }

    if(found == 0)
    {
        printf("No pair found");
    }

    return 0;
}