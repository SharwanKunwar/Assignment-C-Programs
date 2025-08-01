#include <stdio.h>

int main() {
    int a, b;
    int result;

    // Input values for a and b
    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    // Calculate the expression
    // According to operator precedence: *, / have higher precedence than +
    // So expression is evaluated as:
    // a + (b * a) + ((10 / 2) * a)
    result = a + b * a + (10 / 2) * a;

    // Print the result
    printf("Result of expression a + b*a + 10/2*a = %d\n", result);

    return 0;
}
