#include <stdio.h>

//Author: Sharwan jung kunwar
//Purpose: Write a C program to find whether given number is positive or negative or zero.

int main() {
    int num;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check sign of the number
    if (num > 0) {
        printf("%d is positive.\n", num);
    } else if (num < 0) {
        printf("%d is negative.\n", num);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
