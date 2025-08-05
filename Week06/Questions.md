# P1:

## 1.	Write a C Program to find the Sum of Series sum=1 + 1/2 + 1/3 + 1/4 + … + 1/N.
```c
#include <stdio.h>

int main() {
    int N;
    double sum = 0.0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        sum += 1.0 / i;
    }

    printf("Sum of the series up to 1/%d = %.6lf\n", N, sum);

    return 0;
}

```

## 2.	Write a C program to generate Pascal's triangle
                        1 
					1		1
				1		2		1
			1		3		3		1

```c
#include <stdio.h>

// Function to calculate factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr (combination)
long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    for(int i = 0; i < rows; i++) {
        // Print leading spaces for alignment
        for(int space = 0; space < rows - i - 1; space++) {
            printf("  ");
        }

        for(int j = 0; j <= i; j++) {
            printf("%4lld", nCr(i, j));
        }
        printf("\n");
    }

    return 0;
}

```

<br>

# P2:
## 3.	Write a C Program to find the Sum of Series  SUM=1-x2/2! +x4/4!-x6/6!+x8/8!-x10/10!
```c
#include <stdio.h>

// Function to calculate factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    double x, sum = 1.0;
    int powers[] = {2, 4, 6, 8, 10};
    int sign = -1;  // To alternate signs starting with minus

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    for (int i = 0; i < 5; i++) {
        int power = powers[i];
        long long fact = factorial(power);

        // Calculate x^power
        double term = 1.0;
        for (int j = 0; j < power; j++) {
            term *= x;
        }

        term = term / fact;

        sum += sign * term;
        sign = -sign;  // Alternate sign
    }

    printf("Sum of the series = %.6lf\n", sum);

    return 0;
}

```

## 4.	Write a C program to generate pyramid of numbers.
                    1
				1	3	1
			1	3	5	3	1

```c
#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows (e.g., 3): ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        // Print the numbers in the pyramid row
        int num = 1;           // Start with 1 in each row
        int mid = i;           // Midpoint for the pyramid row
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%d ", num);

            // Increase num by 2 until midpoint, then decrease by 2
            if (j < mid) {
                num += 2;
            } else {
                num -= 2;
            }
        }

        printf("\n");
    }

    return 0;
}

```

<br>

# P3:
## 5.	Write a C Program to find the Sum of Series sum=1 + x+x2+x3+x4+……….+
```c
#include <stdio.h>
#include <math.h>

int main() {
    double x, sum = 0.0;
    int N;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms N: ");
    scanf("%d", &N);

    for (int i = 0; i <= N; i++) {
        sum += pow(x, i);
    }

    printf("Sum of the series = %.6lf\n", sum);

    return 0;
}

```

## 6.	Write a C program to generate pyramid of numbers.
                    1
					1	2	
					1	2	3	
					1	2	3	4

```c
#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print spaces for left padding (optional, for pyramid shape)
        for (int space = 1; space <= rows - i; space++) {
            printf("  ");  // Two spaces for better alignment
        }

        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d\t", j);
        }

        printf("\n");
    }

    return 0;
}

```

<br>

# P4:
## 7.	Write a C Program to find the Sum of Series sum=1 + 1/2! + 1/3! + 1/4 !+ … + 1/N!.
```c
#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int N;
    double sum = 1.0;  // Starting with 1 for the 0! or 1st term

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 2; i <= N; i++) {
        sum += 1.0 / factorial(i);
    }

    printf("Sum of the series up to 1/%d! = %.6lf\n", N, sum);

    return 0;
}

```

## 8.	Write a C program to generate pattern.

              1
            2 3 2
          3 4 5 4 3
         4 5 6 7 6 5 4
        5 6 7 8 9 8 7 6 5

```c
#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces for alignment
        for (int space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        int num = i;

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }

        num -= 2; // Adjust to print decreasing numbers

        // Print decreasing numbers
        for (int j = 1; j < i; j++) {
            printf("%d ", num);
            num--;
        }

        printf("\n");
    }

    return 0;
}

```

<br>

# P5:
## 9.	C Program to find the sum of series 1^2 + 2^2 + …. + n^2.
```c
#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i * i;  // Add square of i to sum
    }

    printf("Sum of squares from 1^2 to %d^2 = %d\n", n, sum);

    return 0;
}

```
## 10.	Write a C program to generate pattern

       *
      *A*
     *A*A*
    *A*A*A*

```c
#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print pattern for each row
        for (int j = 1; j <= i; j++) {
            printf("*");
            if (j < i) {
                printf("A");
            }
        }

        printf("\n");
    }

    return 0;
}

```


