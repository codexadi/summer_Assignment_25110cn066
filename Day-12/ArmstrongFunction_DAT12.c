#include <stdio.h>

int isArmstrong(int num)
{
    int original = num, sum = 0, rem;

    while (num > 0)
    {rem = num % 10;
        sum += rem * rem * rem;
        num /= 10;
    }

    return (sum == original);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}