#include <stdio.h>

int main() {
    // Item prices
    int sugar = 40;
    int papers = 100;
    int total = sugar + papers;

    // Print formatted bill
    printf("_______________________________\n");
    printf("Item\t\tPrice\n");
    printf("_______________________________\n");
    printf("Sugar\t\t%d\n", sugar);
    printf("Papers\t\t%d\n", papers);
    printf("_______________________________\n");
    printf("Total\t\t%d\n", total);
    printf("_______________________________\n");

    return 0;
}
