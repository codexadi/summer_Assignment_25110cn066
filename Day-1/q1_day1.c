#include <stdio.h>

int main() {

    int n, sum = 0, i;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate sum
    for(i = 1; i <= n; i++) {
        sum = sum + i;
    }

    // Output
    printf("Sum of first %d natural numbers = %d", n, sum);

    return 0;
}