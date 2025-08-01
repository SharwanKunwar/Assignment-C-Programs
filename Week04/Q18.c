#include <stdio.h>

int main() {
    int num, lastDigit, secondLastDigit, result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    lastDigit = num % 10;
    secondLastDigit = (num / 10) % 10;

    result = secondLastDigit - lastDigit;

    printf("Second last digit: %d\n", secondLastDigit);
    printf("Last digit: %d\n", lastDigit);
    printf("Subtraction (second last - last) = %d\n", result);

    return 0;
}
