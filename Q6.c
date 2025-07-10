#include <stdio.h>

//Author: Sharwan jung kuwnar
//Purpsoe: Write a C program to find the whether the given number is divisible by 5 or not.

int main() {
    int num;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check divisibility by 5
    if (num % 5 == 0) {
        printf("%d is divisible by 5.\n", num);
    } else {
        printf("%d is not divisible by 5.\n", num);
    }

    return 0;
}
