#include <stdio.h>

// Author: Sharwan Jung Kunwar
// Purpose: Read a character and two integers, print ASCII value, quotient and remainder

int main() {
    char ch;
    int num1, num2, quotient, remainder;

    // Input
    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c to clear newline from buffer

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    // ASCII value
    printf("\nASCII value of '%c' is: %d\n", ch, ch);

    // Quotient and remainder calculation (if num2 is not zero)
    if (num2 != 0) {
        quotient = num1 / num2;
        remainder = num1 % num2;

        printf("Quotient of %d / %d is: %d\n", num1, num2, quotient);
        printf("Remainder of %d %% %d is: %d\n", num1, num2, remainder);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}
