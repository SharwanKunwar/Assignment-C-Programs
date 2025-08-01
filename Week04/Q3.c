#include <stdio.h>

int main() {
    int i = 1, j = 1, k = 0, l = 1;
    int result;

    // Evaluate the logical expression
    result = i++ && j++ && k++ || l++;

    // Print result and values after expression
    printf("Result = %d\n", result);
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("k = %d\n", k);
    printf("l = %d\n", l);

    return 0;
}
