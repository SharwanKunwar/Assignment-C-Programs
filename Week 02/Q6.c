#include <stdio.h>

// Author : Sharwan Jung Kunwar
// Purpose: To find the divisor when dividend (x), quotient (y), and remainder (z) are given

int main() {
    int x, y, z;
    float number;

    // Input values
    printf("Enter the value of x (dividend): ");
    scanf("%d", &x);

    printf("Enter the value of y (quotient): ");
    scanf("%d", &y);

    printf("Enter the value of z (remainder): ");
    scanf("%d", &z);

    // Calculate the number (divisor)
    if (y != 0) {
        number = (float)(x - z) / y;
        printf("The number (divisor) is: %.2f\n", number);
    } else {
        printf("Quotient cannot be zero.\n");
    }

    return 0;
}
