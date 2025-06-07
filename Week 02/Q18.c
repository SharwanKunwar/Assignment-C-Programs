#include <stdio.h>

// Author: Sharwan Jung Kunwar
// Purpose: Evaluate expressions with x, y, z and print results in one line

int main() {
    float x, y, z;
    float expr1, expr2, expr3;

    // Input
    printf("Enter value for x: ");
    scanf("%f", &x);

    printf("Enter value for y: ");
    scanf("%f", &y);

    printf("Enter value for z: ");
    scanf("%f", &z);

    // Check denominator for expr1 to avoid division by zero
    if ((x - y - z) == 0) {
        printf("Expression 1: Division by zero error.\n");
    } else {
        expr1 = (x + y + z) / (x - y - z);
        expr2 = (x + y + z) / 3;
        expr3 = (x + y) * (x - y) * (y - z);

        // Print all results in one line
        printf("Results: %.2f %.2f %.2f\n", expr1, expr2, expr3);
    }

    return 0;
}
