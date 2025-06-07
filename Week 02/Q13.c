#include <stdio.h>

// Author: Sharwan Jung Kunwar
// Purpose: Calculate electricity bill based on units consumed and cost per unit

int main() {
    int consumerNumber, units;
    float costPerUnit, amount;

    // Input
    printf("Enter consumer number: ");
    scanf("%d", &consumerNumber);

    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    printf("Enter cost per unit: ");
    scanf("%f", &costPerUnit);

    // Calculation
    amount = units * costPerUnit;

    // Output
    printf("\n--- Electricity Bill ---\n");
    printf("Consumer Number : %d\n", consumerNumber);
    printf("Units Consumed  : %d\n", units);
    printf("Cost per Unit   : %.2f\n", costPerUnit);
    printf("Total Amount    : %.2f\n", amount);

    return 0;
}
