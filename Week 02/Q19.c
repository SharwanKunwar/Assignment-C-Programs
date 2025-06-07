#include <stdio.h>
#include <math.h>  

// Author: Sharwan Jung Kunwar
// Purpose: Calculate compound interest

int main() {
    double principal, rate, compoundInterest;
    int n;

    // Input
    printf("Enter principal amount (P): ");
    scanf("%lf", &principal);

    printf("Enter rate of interest (r): ");
    scanf("%lf", &rate);

    printf("Enter number of periods (n): ");
    scanf("%d", &n);

    // Compound interest calculation
    compoundInterest = principal * pow((1 + rate / 100), n);

    // Output
    printf("Compound Interest after %d periods = %.2lf\n", n, compoundInterest);

    return 0;
}
