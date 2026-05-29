#include <stdio.h>

int main() {

    int n, digit, product = 1;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Find product of digits
    while(n != 0) {
        digit = n % 10;
        product = product * digit;
        n = n / 10;
    }

    // Output
    printf("Product of digits = %d", product);

    return 0;
}