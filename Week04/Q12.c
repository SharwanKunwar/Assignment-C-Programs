#include <stdio.h>
#include <math.h>

int main() {
    double d, h, E;

    // Input values for d and h
    printf("Enter value for d: ");
    scanf("%lf", &d);

    printf("Enter value for h: ");
    scanf("%lf", &h);

    // Calculate E
    E = sqrt((2 * d) / h);

    // Print result
    printf("Result E = %.4lf\n", E);

    return 0;
}
