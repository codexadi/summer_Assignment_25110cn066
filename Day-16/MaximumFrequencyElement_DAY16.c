#include <stdio.h>

int main()
{
    int a[100], n, i, j;
    int maxFreq = 0, element, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }

        if(count > maxFreq)
        {
            maxFreq = count;
            element = a[i];
        }
    }

    printf("Element with maximum frequency = %d\n", element);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}