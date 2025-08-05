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
#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Input from user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int a = num1;
    int b = num2;

    // Euclidean algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD of %d and %d is %d\n", num1, num2, a);

    return 0;
}

```
## 5.	Write a C program to check whether given number is Armstrong or not
```c
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Calculate sum of nth powers of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if number is Armstrong
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

```
## 6.	Write a C program to print the characters from A to Z using loop.
```c
#include <stdio.h>

int main() {
    char ch;

    printf("Alphabets from A to Z:\n");

    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", ch);
    }

    printf("\n");
    return 0;
}

```

<br>

# P3:
## 7.	Write a C program to count number of digits in a given integer.
```c
#include <stdio.h>

int main() {
    int num, count = 0;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle 0 separately
    if (num == 0) {
        count = 1;
    } else {
        // If negative, make it positive
        if (num < 0) {
            num = -num;
        }

        // Count digits
        while (num != 0) {
            num /= 10;
            count++;
        }
    }

    printf("Number of digits = %d\n", count);

    return 0;
}

```
## 8.	Write a C program to find to check whether given number is prime or not
```c
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle numbers less than 2
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Output result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

```
## 9.	Write a C program to find to display the factors of a given number
```c
#include <stdio.h>

int main() {
    int num, i;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Handle negative or zero input
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Factors of %d are: ", num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

```

<br>

# P4:
## 10.	Write a C program to find to reverse a given integer.
```c
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num; // For displaying original input

    while (num != 0) {
        remainder = num % 10;            // Get the last digit
        reversed = reversed * 10 + remainder; // Append it to reversed number
        num /= 10;                       // Remove the last digit
    }

    printf("Reversed number of %d is %d\n", original, reversed);

    return 0;
}

```
## 11.	Write a C program to print the Fibonacci sequence up to given value of n.
```c
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Input from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci sequence up to %d:\n", n);

    // Print Fibonacci numbers up to n
    while (first <= n) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}

```
## 12.	Write a C program to print the multiplication table to the given value of n.
```c
#include <stdio.h>

int main() {
    int n, i;

    // Input from user
    printf("Enter the number to print multiplication table: ");
    scanf("%d", &n);

    printf("Multiplication table of %d:\n", n);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

```

<br>

# P5:

## 13.	Write a C program to check whether given number is palindrome or not
```c
#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if palindrome
    if (original == reversed)
        printf("%d is a palindrome number.\n", original);
    else
        printf("%d is not a palindrome number.\n", original);

    return 0;
}

```
## 14.	Write a C program to check whether given number is perfect or not
```c
#include <stdio.h>

int main() {
    int num, i, sum = 0;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Calculate sum of proper divisors
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if number is perfect
    if (sum == num)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    return 0;
}

```
## 15.	Write a C program to print the prime numbers between 1 and n.
```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, j;
    bool isPrime;

    // Input from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    for (i = 2; i <= n; i++) {
        isPrime = true;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}

```
