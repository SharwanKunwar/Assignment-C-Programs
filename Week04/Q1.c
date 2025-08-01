#include<stdio.h>

//Author: Sharwan jung kunwar
//Purpose: 	Write a C program to find  the sum of last digit in given numbers.


int main(){

    int n, i, num, lastDigit, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        lastDigit = num % 10;   // Get last digit
        sum += lastDigit;       // Add to sum
    }

    printf("Sum of last digits = %d\n", sum);

    return 0;

}