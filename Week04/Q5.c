#include <stdio.h>
#include <math.h>  // Required for sin() function

int main() {
    float s1, s2, angle_deg, angle_rad, area;

    // Input
    printf("Enter side 1: ");
    scanf("%f", &s1);

    printf("Enter side 2: ");
    scanf("%f", &s2);

    printf("Enter angle between them (in degrees): ");
    scanf("%f", &angle_deg);

    // Convert angle to radians
    angle_rad = (3.14 / 180) * angle_deg;

    // Calculate area
    area = (s1 * s2 * sin(angle_rad)) / 2;

    // Output
    printf("Area of the scalene triangle = %.2f\n", area);

    return 0;
}
