#include <stdio.h>
#include <math.h>

// Author: Sharwan Jung Kunwar
// Purpose: To calculate area and perimeter of a right-angled triangle

int main() {
    float base, height, area, perimeter, hypotenuse;

    // Input base
    printf("Enter the base: ");
    scanf("%f", &base);

    // Input height
    printf("Enter the height: ");
    scanf("%f", &height);

    // Calculate area
    area = 0.5 * base * height;

    // Calculate hypotenuse using Pythagoras theorem
    hypotenuse = sqrt(pow(base, 2) + pow(height, 2));     //Hypotenuse: √(base² + height²)

    // Calculate perimeter
    perimeter = base + height + hypotenuse;

    // Display results
    printf("\nThe Area is      : %.2f\n", area);
    printf("The Perimeter is : %.2f\n", perimeter);

    return 0;
}
