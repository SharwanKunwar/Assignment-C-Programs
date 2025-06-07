#include <stdio.h>

// Author: Sharwan Jung Kunwar
// Purpose: Convert given days into years, weeks, and days (ignoring leap years)

int main() {
    int total_days, years, weeks, days;

    // Input
    printf("Enter total number of days: ");
    scanf("%d", &total_days);

    // Conversion logic
    years = total_days / 365;
    weeks = (total_days % 365) / 7;
    days = total_days - (years * 365 + weeks * 7);

    // Output
    printf("Equivalent time is: %d year(s), %d week(s), and %d day(s)\n", years, weeks, days);

    return 0;
}
