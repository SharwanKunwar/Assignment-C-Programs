#include <stdio.h>

//Author: Sharwan jung kunwar
//Purpsoe: to compare two numbers and determine whether they are equal, or if one is greater or less than the other.



int main() {
    int num1, num2;

    // Input from user
    printf("Enter two integers:\n");
    scanf("%d %d", &num1, &num2);

    // Comparison
    if (num1 == num2) {
        printf("Both numbers are equal.\n");
    } else if (num1 > num2) {
        printf("%d is greater than %d.\n", num1, num2);
    } else {
        printf("%d is less than %d.\n", num1, num2);
    }

    return 0;
}
