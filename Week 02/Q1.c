#include<stdio.h> 

// Author: Sharwan Jung Kunwar
// Purpose: To find gross salary by taking basic salary, DA, and HRA as input, calculating PF (10% of basic), and computing gross salary.

int main() {

    // Declare integer variables for basic salary, dearness allowance (DA), and house rent allowance (HRA)
    int basicSalary, da, hra;

    // Declare float variables for provident fund (PF) and gross salary
    float pf, grossSalary;

    // Prompt user to enter basic salary and store the value in basicSalary
    printf("Enter your basic Salary: ");
    scanf("%d", &basicSalary);

    // Prompt user to enter DA (Dearness Allowance) and store it in da
    printf("Enter your Da : ");
    scanf("%d", &da);

    // Prompt user to enter HRA (House Rent Allowance) and store it in hra
    printf("Enter your HRA : ");
    scanf("%d", &hra);

    // Calculate PF as 10% of basic salary (0.10f ensures floating-point calculation)
    pf = 0.10f * basicSalary;

    // Calculate gross salary by adding basic salary, DA, and HRA, then subtracting PF
    grossSalary = (basicSalary + da + hra) - pf;

    // Display the calculated gross salary, formatted to 2 decimal places
    printf("The gross Salary is : %.2f\n", grossSalary);

    return 0; 
}
