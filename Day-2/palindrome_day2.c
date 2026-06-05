#include <stdio.h>

int main() {

    int n, original, reverse = 0, remainder;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Reverse the number
    while(n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    // Check palindrome
    if(original == reverse)
        printf("%d is a Palindrome Number", original);
    else
        printf("%d is not a Palindrome Number", original);

    return 0;
}