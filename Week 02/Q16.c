#include <stdio.h>
#include <math.h> 

// Author: Sharwan Jung Kunwar
// Purpose: Calculate area and perimeter of a triangle using Heron's formula

int main() {
    float a, b, c, perimeter, s, area;

    // Input sides of the triangle
    printf("Enter side a: ");
    scanf("%f", &a);

    printf("Enter side b: ");
    scanf("%f", &b);

    printf("Enter side c: ");
    scanf("%f", &c);

    // Calculate perimeter
    perimeter = a + b + c;

    // Calculate semi-perimeter
    s = perimeter / 2;

    // Calculate area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Output results
    printf("Perimeter of the triangle = %.2f\n", perimeter);
    printf("Area of the triangle = %.2f\n", area);

    return 0;
}
