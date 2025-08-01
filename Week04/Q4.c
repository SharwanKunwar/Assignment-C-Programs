#include <stdio.h>

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = num << 2;  // Left shift by 2 bits = multiply by 4

    printf("%d multiplied by 4 is: %d\n", num, result);

    return 0;
}
