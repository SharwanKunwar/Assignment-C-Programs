#include<stdio.h>

//Author: Sharwan jung kunwar
//Purpose: To find sum of 1 int and 1 float number

int main(){
    int num01 = 10;
    float num02 = 20.5;
    
    float sum = (num01 + num02);

    printf("Sum of %d and %.3f is %.3f\n", num01, num02,sum);

    return 0;
}