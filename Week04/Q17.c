#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swap using XOR
    a = a ^ b;  // Step 1
    b = a ^ b;  // Step 2
    a = a ^ b;  // Step 3

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
