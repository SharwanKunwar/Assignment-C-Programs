#include <stdio.h>

//Author: Sharwan jung kunwar.
//Purpose: Write a C program to find the given number is even or odd.

int main() {
    int num;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check even or odd
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}
