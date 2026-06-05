#include <stdio.h>

int main() {

    int n, i;
    long long factorial = 1;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate factorial
    for(i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    // Output
    printf("Factorial of %d = %lld", n, factorial);

    return 0;
}