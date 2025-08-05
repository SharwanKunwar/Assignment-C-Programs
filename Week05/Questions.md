# P1:

## 1.	Write a C program to find the factorial of a given integer
```c
#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Error handling for negative number
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}

```
## 2.	Write a C program to find the sum of individual digits of a given integer.
```c
#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Make a copy to display later (optional)
    int original = num;

    // If the number is negative, make it positive
    if (num < 0) {
        num = -num;
    }

    // Extract and sum digits
    while (num != 0) {
        digit = num % 10;  // Get last digit
        sum += digit;      // Add digit to sum
        num /= 10;         // Remove last digit
    }

    // Display result
    printf("Sum of digits of %d = %d\n", original, sum);

    return 0;
}

```
### 3.	Write a C program to find the LCM of two given numbers.
```c
#include <stdio.h>

// Function to find GCD using Euclidean algorithm
int findGCD(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, gcd, lcm;

    // Input from user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate GCD
    gcd = findGCD(num1, num2);

    // Calculate LCM using formula: LCM = (num1 * num2) / GCD
    lcm = (num1 * num2) / gcd;

    // Display result
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}

```

<br>

# P2:

## 4.	Write a C program to find the GCD of two given numbers.
```c
solution
```
## 5.	Write a C program to check whether given number is Armstrong or not
```c
solution
```
## 6.	Write a C program to print the characters from A to Z using loop.
```c
solution
```

<br>

# P3:
## 7.	Write a C program to count number of digits in a given integer.
```c
solution
```
## 8.	Write a C program to find to check whether given number is prime or not
```c
solution
```
## 9.	Write a C program to find to display the factors of a given number
```c
solution
```

<br>

# P4:
## 10.	Write a C program to find to reverse a given integer.
```c
solution
```
## 11.	Write a C program to print the Fibonacci sequence up to given value of n.
``
solution`c
```
## 12.	Write a C program to print the multiplication table to the given value of n.
```c
solution
```

<br>

# P5:

## 13.	Write a C program to check whether given number is palindrome or not
```c
solution
```
## 14.	Write a C program to check whether given number is perfect or not
```c
solution
```
## 15.	Write a C program to print the prime numbers between 1 and n.
```c
solution
```
