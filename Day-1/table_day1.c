#include <stdio.h>

int main() {

    int n, i;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Multiplication table
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}