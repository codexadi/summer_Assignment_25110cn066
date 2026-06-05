#include <stdio.h>

int main() {

    int n, reverse = 0, remainder;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Reverse number
    while(n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    // Output
    printf("Reversed number = %d", reverse);

    return 0;
}