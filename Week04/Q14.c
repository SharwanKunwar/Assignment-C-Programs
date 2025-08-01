#include <stdio.h>

int main() {
    double m1, m2, g, Torque;

    // Input values
    printf("Enter value of m1: ");
    scanf("%lf", &m1);

    printf("Enter value of m2: ");
    scanf("%lf", &m2);

    printf("Enter value of g (acceleration due to gravity): ");
    scanf("%lf", &g);

    // Calculate Torque
    Torque = ((2 * m1 * m2) / (m1 + m2)) * g;

    // Output the result
    printf("Torque = %.4lf\n", Torque);

    return 0;
}
