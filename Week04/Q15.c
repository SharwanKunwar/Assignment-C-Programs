#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, realPart, imagPart;

    // Input coefficients
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    discriminant = (b * b) - (4 * a * c);

    // Check for imaginary roots
    if (discriminant < 0) {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);

        printf("Roots are imaginary.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    } else {
        printf("The roots are not imaginary.\n");
    }

    return 0;
}
