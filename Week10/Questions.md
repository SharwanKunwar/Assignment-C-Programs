<br>

# P1:


## 1.	Write a C program to store name, roll number, year and marks of three subjects of n students and print the student the name, roll number, average and grade based on average marks of the student using structures.

```c
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int year;
    float marks[3];
    float average;
    char grade;
};

// Function to calculate grade based on average marks
char calculateGrade(float avg) {
    if (avg >= 90)
        return 'A';
    else if (avg >= 80)
        return 'B';
    else if (avg >= 70)
        return 'C';
    else if (avg >= 60)
        return 'D';
    else
        return 'F';
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student data
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  // Read string with spaces

        printf("Roll Number: ");
        scanf("%d", &students[i].roll);

        printf("Year: ");
        scanf("%d", &students[i].year);

        printf("Enter marks of 3 subjects separated by space: ");
        float sum = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%f", &students[i].marks[j]);
            sum += students[i].marks[j];
        }

        // Calculate average and grade
        students[i].average = sum / 3.0;
        students[i].grade = calculateGrade(students[i].average);
    }

    // Print student details
    printf("\nStudent Details:\n");
    printf("Name\tRoll No\tYear\tAverage\tGrade\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\t%d\t%.2f\t%c\n", students[i].name, students[i].roll, students[i].year, students[i].average, students[i].grade);
    }

    return 0;
}

```

## 2.	Write a to perform string copy without using strcpy() function

```c
#include <stdio.h>

void stringCopy(char *dest, const char *src) {
    int i = 0;
    // Copy characters until null terminator is reached
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';  // Add null terminator at the end
}

int main() {
    char source[100], destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    // Remove newline character from fgets if present
    int len = 0;
    while (source[len] != '\0') {
        if (source[len] == '\n') {
            source[len] = '\0';
            break;
        }
        len++;
    }

    stringCopy(destination, source);

    printf("Copied string: %s\n", destination);

    return 0;
}

```

<br>

# P2:


## 1.	Write a C Program to read real and imaginary parts of a complex number using structures and perform the following operations on complex numbers.
 * Add two complex numbers.
 * Multiply two complex numbers.
 * Subtract two complex numbers.

 ```c
 #include <stdio.h>

struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Function to subtract two complex numbers
struct Complex subtractComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

// Function to print a complex number in a+bi form
void printComplex(struct Complex c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}

int main() {
    struct Complex c1, c2, sum, diff, product;

    // Input first complex number
    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    // Input second complex number
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    // Perform operations
    sum = addComplex(c1, c2);
    diff = subtractComplex(c1, c2);
    product = multiplyComplex(c1, c2);

    // Display results
    printf("\nSum: ");
    printComplex(sum);

    printf("Difference: ");
    printComplex(diff);

    printf("Product: ");
    printComplex(product);

    return 0;
}

 ```


## 2. Write a C program to compare two string without using strcmp () function.

```c
#include <stdio.h>

int stringCompare(const char *str1, const char *str2) {
    int i = 0;
    // Compare characters until they differ or end of either string is reached
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }

    // If one string ended, check which one
    return (str1[i] - str2[i]);
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character from fgets input
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') {
        if (str1[len1] == '\n') {
            str1[len1] = '\0';
            break;
        }
        len1++;
    }
    while (str2[len2] != '\0') {
        if (str2[len2] == '\n') {
            str2[len2] = '\0';
            break;
        }
        len2++;
    }

    int result = stringCompare(str1, str2);

    if (result == 0)
        printf("Both strings are equal.\n");
    else if (result < 0)
        printf("First string is less than second string.\n");
    else
        printf("First string is greater than second string.\n");

    return 0;
}

```

<br>

# P3:

## 1.	Write a C Program to read time in hours, minutes, seconds using structures and perform the following operations on time.
* Addition of two time periods
* Subtraction of two time periods

```c
#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to add two times
struct Time addTime(struct Time t1, struct Time t2) {
    struct Time result;

    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + result.seconds / 60;
    result.seconds %= 60;

    result.hours = t1.hours + t2.hours + result.minutes / 60;
    result.minutes %= 60;

    return result;
}

// Function to subtract two times (assuming t1 >= t2)
struct Time subtractTime(struct Time t1, struct Time t2) {
    struct Time result;

    // Convert both times to total seconds for easy subtraction
    int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    int diff = totalSeconds1 - totalSeconds2;
    if (diff < 0) {
        printf("Warning: Resulting time is negative. Taking absolute value.\n");
        diff = -diff;
    }

    result.hours = diff / 3600;
    diff %= 3600;
    result.minutes = diff / 60;
    result.seconds = diff % 60;

    return result;
}

void printTime(struct Time t) {
    printf("%02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}

int main() {
    struct Time time1, time2, sum, diff;

    // Input first time
    printf("Enter first time (hours minutes seconds): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

    // Input second time
    printf("Enter second time (hours minutes seconds): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);

    // Addition
    sum = addTime(time1, time2);

    // Subtraction
    diff = subtractTime(time1, time2);

    // Output results
    printf("\nSum of times: ");
    printTime(sum);

    printf("Difference of times: ");
    printTime(diff);

    return 0;
}

```

## 2. Write a C program to count the frequency of occurrence of a given character in a given string.

```c
#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    // Count frequency of character ch in str
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("The character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}

```

<br>

# P4: 


## 1.	Write a C Program to read distance in inches and feet using structures and perform the following operations 
* Add two distances
* Subtract two distances

```c
#include <stdio.h>

struct Distance {
    int feet;
    float inches;
};

// Function to add two distances
struct Distance addDistance(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    // If inches exceed 12, convert to feet
    if (result.inches >= 12.0) {
        result.feet += (int)(result.inches / 12);
        result.inches = (float)((int)result.inches % 12) + (result.inches - (int)result.inches);
    }
    return result;
}

// Function to subtract two distances (assuming d1 >= d2)
struct Distance subtractDistance(struct Distance d1, struct Distance d2) {
    struct Distance result;

    // Convert both distances to total inches for easy subtraction
    float totalInches1 = d1.feet * 12 + d1.inches;
    float totalInches2 = d2.feet * 12 + d2.inches;
    float diff = totalInches1 - totalInches2;

    if (diff < 0) {
        printf("Warning: Resulting distance is negative. Taking absolute value.\n");
        diff = -diff;
    }

    result.feet = (int)(diff / 12);
    result.inches = diff - result.feet * 12;

    return result;
}

void printDistance(struct Distance d) {
    printf("%d feet %.2f inches\n", d.feet, d.inches);
}

int main() {
    struct Distance dist1, dist2, sum, diff;

    // Input first distance
    printf("Enter first distance (feet inches): ");
    scanf("%d %f", &dist1.feet, &dist1.inches);

    // Input second distance
    printf("Enter second distance (feet inches): ");
    scanf("%d %f", &dist2.feet, &dist2.inches);

    // Addition
    sum = addDistance(dist1, dist2);

    // Subtraction
    diff = subtractDistance(dist1, dist2);

    // Output results
    printf("\nSum of distances: ");
    printDistance(sum);

    printf("Difference of distances: ");
    printDistance(diff);

    return 0;
}

```


## 2.	Write a  C program to convert all lower case letters to upper case letters in a given string.

```c
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert lowercase letters to uppercase
    while (str[i] != '\0') {
        // Check if character is lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // Convert to uppercase
        }
        i++;
    }

    printf("Uppercase string: %s", str);

    return 0;
}

```

<br>

# P5:  


## 1.	 Write a C program to read employee details employee number, employee name, basic salary, hra and da of n employees using structures and print employee number, employee name and gross salary of n employees.

```c
#include <stdio.h>

struct Employee {
    int empNumber;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d\n", i + 1);

        printf("Employee Number: ");
        scanf("%d", &employees[i].empNumber);

        printf("Employee Name: ");
        scanf(" %[^\n]", employees[i].name);  // Read string with spaces

        printf("Basic Salary: ");
        scanf("%f", &employees[i].basicSalary);

        printf("HRA: ");
        scanf("%f", &employees[i].hra);

        printf("DA: ");
        scanf("%f", &employees[i].da);

        // Calculate gross salary
        employees[i].grossSalary = employees[i].basicSalary + employees[i].hra + employees[i].da;
    }

    // Print employee details
    printf("\nEmployee Details:\n");
    printf("Emp No\tName\t\tGross Salary\n");
    printf("------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%-15s\t%.2f\n", employees[i].empNumber, employees[i].name, employees[i].grossSalary);
    }

    return 0;
}

```


## 2.	Write a C program to count number of words, characters and digits in a given string.

```c
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int words = 0, characters = 0, digits = 0;
    int i = 0;
    int inWord = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        // Count digits
        if (isdigit(str[i])) {
            digits++;
        }

        // Count characters (excluding spaces and newline)
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            characters++;
        }

        // Detect words
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            if (!inWord) {
                inWord = 1;
                words++;
            }
        } else {
            inWord = 0;
        }

        i++;
    }

    printf("Number of words: %d\n", words);
    printf("Number of characters (excluding spaces): %d\n", characters);
    printf("Number of digits: %d\n", digits);

    return 0;
}

```



