#include <stdio.h>

// Author: Sharwan Jung Kunwar
// Purpose: Convert centimeters to meters, and meters to kilometers

int main() {
    float centimeters, meters, kilometers;

    // Input from user
    printf("Enter length in centimeters: ");
    scanf("%f", &centimeters);

    // Conversions
    meters = centimeters / 100;        // 1 meter = 100 cm
    kilometers = meters / 1000;        // 1 kilometer = 1000 meters

    // Output
    printf("Length in meters: %.2f m\n", meters);
    printf("Length in kilometers: %.5f km\n", kilometers);

    return 0;
}
