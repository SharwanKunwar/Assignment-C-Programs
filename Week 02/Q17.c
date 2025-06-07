#include <stdio.h>

// Author: Sharwan Jung Kunwar
// Purpose: Read five subject marks and calculate the average

int main() {
    int marks[5];
    int sum = 0;
    float average;

    // Read marks for 5 subjects
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    // Calculate average
    average = sum / 5.0;  // Use 5.0 to get float division

    // Output average
    printf("Average marks = %.2f\n", average);

    return 0;
}
