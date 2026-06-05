#include <stdio.h>

int main() {

    int n, count = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Count digits
    while(n != 0) {
        n = n / 10;
        count++;
    }

    // Output
    printf("Number of digits = %d", count);

    return 0;
}