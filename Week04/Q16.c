#include <stdio.h>

int main() {
    int ret;

    // Print text only
    ret = printf("Hello, World!\n");
    printf("Return value of printf (text only): %d\n\n", ret);

    // Print text with integer
    int num = 42;
    ret = printf("The number is %d\n", num);
    printf("Return value of printf (text + int): %d\n\n", ret);

    // Print text with float
    float pi = 3.14159f;
    ret = printf("Value of pi is %.2f\n", pi);
    printf("Return value of printf (text + float): %d\n", ret);

    return 0;
}
