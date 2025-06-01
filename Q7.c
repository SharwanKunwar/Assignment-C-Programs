#include<stdio.h>

//Author: Sharwan jung kunwar
//Purpose: To swap two numbers using temp variable.

int main(){
    int a=2,b=4;
    int temp;

    printf("Before swap a:%d and b:%d\n",a,b);

    temp = a;
    a = b;
    b = temp;

    printf("after swap a:%d and b:%d\n",a,b);



    return 0;
}