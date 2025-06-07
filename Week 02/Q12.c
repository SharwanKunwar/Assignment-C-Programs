#include <stdio.h>

// Author: Sharwan Jung Kunwar
// Purpose: Calculate the third angle of a triangle when two angles are given

int main() {
    int angle1, angle2, angle3;

    // Input
    printf("Enter the first angle of the triangle: ");
    scanf("%d", &angle1);

    printf("Enter the second angle of the triangle: ");
    scanf("%d", &angle2);

    // Calculate third angle
    angle3 = 180 - (angle1 + angle2);

    // Output
    printf("The third angle of the triangle is: %d degrees\n", angle3);

    return 0;
}
