#include <stdio.h>

// Author: Sharwan Jung Kunwar
// Purpose: To convert temperature from Fahrenheit to Celsius and vice versa.

int main() {
    int op;  // Option to select conversion type
    float celsius, fahrenheit;  // Variables for temperature values

    // Display menu
    printf("Temperature Conversion\n\n");
    printf("\t1. Fahrenheit to Celsius conversion\n");
    printf("\t2. Celsius to Fahrenheit conversion\n");
    printf("\nEnter your choice (1 or 2): ");
    scanf("%d", &op);


    // Option 1: Fahrenheit to Celsius
    if (op == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) / 1.8;
        printf("Temperature is: %.2f °C\n", celsius);
    }
    // Option 2: Celsius to Fahrenheit
    else if (op == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 1.8) + 32;
        printf("Temperature is: %.2f °F\n", fahrenheit);
    }
    // Invalid choice
    else {
        printf("Invalid input. Please choose a valid option (1 or 2)!\n");
    }


    return 0;
}
