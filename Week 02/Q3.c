#include <stdio.h>

// Author: Sharwan Jung Kunwar
// Purpose: To find the least number that must be added to x to make it exactly divisible by y

int main() {
    int x, y, rem, toAdd;

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


    if (rem == 0) {
        toAdd = 0;
        printf("No need to add anything.\n"); 
    } else {
        toAdd = y - rem;
        printf("The least number to be added to %d to make it divisible by %d is: %d\n", x, y, toAdd);
    }

    return 0;
}
