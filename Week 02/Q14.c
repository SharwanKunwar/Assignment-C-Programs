#include <stdio.h>

// Author: Sharwan Jung Kunwar
// Purpose: Add two numbers using subtraction operator (Sum = a - (-b))

int main() {
    int a, b, sum;

    // Input
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Addition using subtraction
    sum = a - (-b);

    // Output
    printf("The sum of %d and %d is: %d\n", a, b, sum);

    return 0;
}
