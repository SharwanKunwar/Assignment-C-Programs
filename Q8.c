#include<stdio.h>

//Author: Sharwan jung kunwar
//Purpose: To swap two number without using third variable.

int main(){
    int a=2,b=4;

    printf("Before swapping a=%d and b=%d\n",a,b);

    a += b;
    b = a-b;
    a -= b;

    printf("After swapping a = %d and b = %d\n",a,b);
    
    return 0;
}