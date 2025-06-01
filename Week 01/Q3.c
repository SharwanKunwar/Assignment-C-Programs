#include<stdio.h>

//Author: Sharwan jung kunwar
//Purpose: to solve s= ut+1/2at^2

int main(){

    //variable declaration and defination
    int u = 0;
    int t=3;
    int a=2;

    int s = u*t+(a*t*t)/2;

    printf("The displacement is : %d\n",s);

    return 0;
}