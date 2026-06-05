#include <stdio.h>

int main() {
    int num, i;
    int largestPrimeFactor = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 2; i <= num; i++) {
        while (num % i == 0) {
            largestPrimeFactor = i;
            num = num / i;
        }
    }

    printf("Largest Prime Factor = %d\n", largestPrimeFactor);

    return 0;
}