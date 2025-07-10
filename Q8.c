#include <stdio.h>

//Author: Sharwan jung kunwar
//Purpose: Write a program to read three integer values from the keyboard and displays the output stating that they are the sides of right-angled triangle x=a*a and y=b*b and z=c*c if(a>b&&a>c&&(x==y+ z)) || if(b>a&&b>c&&(y== x+ z)) || if(c>a&&c>b&&z==x+y)


int main() {
    int a, b, c;
    int x, y, z;

    // Input from user
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Square of each side
    x = a * a;
    y = b * b;
    z = c * c;

    // Check which is the largest and apply Pythagoras
    if (a > b && a > c && x == y + z) {
        printf("These are the sides of a right-angled triangle.\n");
    } else if (b > a && b > c && y == x + z) {
        printf("These are the sides of a right-angled triangle.\n");
    } else if (c > a && c > b && z == x + y) {
        printf("These are the sides of a right-angled triangle.\n");
    } else {
        printf("These are NOT the sides of a right-angled triangle.\n");
    }

    return 0;
}
