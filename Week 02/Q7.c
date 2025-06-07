#include<stdio.h>

//Author: Sharwan jung kunwar
//Purpose: To find the sum of natural numbers 1 to n (read n as input and use formula sum = n(n+1)/2 )


int main(){
    int n;
    int sum = 0;

    printf("Enter length : ");
    scanf("%d", &n);

    sum = n*(n+1)/2;

    printf("The sum from 1 to %d is: %d\n",n,sum);

    return 0;

}