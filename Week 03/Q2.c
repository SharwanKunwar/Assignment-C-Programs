#include <stdio.h>

//Author: Sharwan jung kunwar
//Purpose: Write a C program to find largest of the three given number.

int main() {
    int a, b, c;

    // Input from user
    printf("Enter three integers:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Compare to find the largest
    if (a >= b && a >= c) {
        printf("%d is the largest.\n", a);
    } else if (b >= a && b >= c) {
        printf("%d is the largest.\n", b);
    } else {
        printf("%d is the largest.\n", c);
    }

    return 0;
}
