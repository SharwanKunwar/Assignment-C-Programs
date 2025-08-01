#include <stdio.h>

int main() {
    int x = 1;
    int result;

    result = x += (x++) + (++x) + x;

    printf("Final value of x = %d\n", x);
    printf("Result = %d\n", result);

    return 0;
}
