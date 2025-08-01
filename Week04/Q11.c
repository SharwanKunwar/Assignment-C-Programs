#include <stdio.h>

int main() {
    int x;

    x = (20 || 40) && (10);

    printf("Result of x = (20 || 40) && (10) is: %d\n", x);

    return 0;
}
