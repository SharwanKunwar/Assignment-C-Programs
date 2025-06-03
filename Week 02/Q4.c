#include <stdio.h>

// Author: Sharwan Jung Kunwar
// Purpose: To find the least number that must be subtracted from x to make it exactly divisible by y

int main() {
    int x, y, rem, toSub;

    // Take input from user
    printf("Enter the value of X: ");
    scanf("%d", &x);

    printf("Enter the value of Y: ");
    scanf("%d", &y);

    // Check for division by zero
    if (y == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }

    // Compute remainder
    rem = x % y;

    if (rem == 0) {
        toSub = 0;
        printf("No need to subtract anything.\n"); 
    } else {
        toSub = rem;
        printf("The least number to be subtracted from %d to make it divisible by %d is: %d\n", x, y, toSub);
    }

    return 0;
}
