#include <stdio.h>

int main()
{
    int a[100], n, i;
    int sum = 0, total, missing;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n - 1);

    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    total = n * (n + 1) / 2;
    missing = total - sum;

    printf("Missing number is %d", missing);

    return 0;
}