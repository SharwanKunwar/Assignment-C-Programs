#include<stdio.h>

//Author: Sharwan jung kunwar
//Purpose: To calculate simple interest (SI= PTR/100)


int main(){
    int principal, time, rate;

    printf("Enter the principal amount: ");
    scanf("%d",&principal);
    printf("Enter the time period: ");
    scanf("%d",&time);
    printf("Enter the rate: ");
    scanf("%d",&rate);

    int SI = (principal * time * rate) / 100;

    printf("The simple interest is: %d", SI);

    return 0;

}