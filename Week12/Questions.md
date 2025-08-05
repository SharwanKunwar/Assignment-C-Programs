<br>

# P1:

## 1.	Write a C program to reverse content of a file.
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    long file_size;
    char *buffer;
    int i;

    // Open the file in read mode
    fp = fopen("input.txt", "rb");  // Use binary mode to avoid newline issues
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Move to end to find file size
    fseek(fp, 0, SEEK_END);
    file_size = ftell(fp);
    rewind(fp);

    // Allocate buffer to hold file content
    buffer = (char *)malloc(file_size);
    if (buffer == NULL) {
        perror("Memory allocation failed");
        fclose(fp);
        return 1;
    }

    // Read the file into buffer
    fread(buffer, 1, file_size, fp);
    fclose(fp);

    // Open the file again in write mode to overwrite with reversed content
    fp = fopen("input.txt", "wb");
    if (fp == NULL) {
        perror("Error opening file for writing");
        free(buffer);
        return 1;
    }

    // Write reversed content to file
    for (i = file_size - 1; i >= 0; i--) {
        fputc(buffer[i], fp);
    }

    fclose(fp);
    free(buffer);

    printf("File content reversed successfully.\n");
    return 0;
}

```
## 2.	Write a C program to write the details of three employees into a file and read them and print.
```c
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[3];
    FILE *fp;
    int i;

    // Input employee details
    for (i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);  // reads string with spaces
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        printf("\n");
    }

    // Write to file (text mode)
    fp = fopen("employees.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (i = 0; i < 3; i++) {
        fprintf(fp, "%d %s %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }
    fclose(fp);

    // Read from file and print
    fp = fopen("employees.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Employee details read from file:\n");
    for (i = 0; i < 3; i++) {
        fscanf(fp, "%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
        printf("ID: %d, Name: %s, Salary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }
    fclose(fp);

    return 0;
}

```

<br>

# P2:

## 1.	Write a C Program to convert uppercase content of file to lower case.
```c
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    int ch;

    // Open the file in read mode
    fp = fopen("input.txt", "r+");  // open for reading and writing
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read each character, convert if uppercase, and write back
    while ((ch = fgetc(fp)) != EOF) {
        if (ch >= 'A' && ch <= 'Z') {
            ch = tolower(ch);
        }
        // Move back one position to overwrite the character
        fseek(fp, -1, SEEK_CUR);
        fputc(ch, fp);
    }

    fclose(fp);
    printf("File content converted to lowercase successfully.\n");
    return 0;
}

```
## 2.	 Write a C program to append the content of file at the end of another file.
```c
#include <stdio.h>

int main() {
    FILE *source, *destination;
    int ch;

    // Open source file in read mode
    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    // Open destination file in append mode
    destination = fopen("destination.txt", "a");
    if (destination == NULL) {
        printf("Error opening destination file.\n");
        fclose(source);
        return 1;
    }

    // Read from source and write to destination
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("Content appended successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}

```

<br>

# P3:

## 1.	Write a C Program that merges lines alternatively from two files and print the result.
```c
#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LEN 256

int main() {
    FILE *fp1, *fp2;
    char line1[MAX_LINE_LEN], line2[MAX_LINE_LEN];
    int read1, read2;

    // Open the first file in read mode
    fp1 = fopen("file1.txt", "r");
    if (fp1 == NULL) {
        printf("Error opening file1.txt\n");
        return 1;
    }

    // Open the second file in read mode
    fp2 = fopen("file2.txt", "r");
    if (fp2 == NULL) {
        printf("Error opening file2.txt\n");
        fclose(fp1);
        return 1;
    }

    // Read lines alternatively and print them
    while (1) {
        read1 = fgets(line1, MAX_LINE_LEN, fp1) != NULL;
        read2 = fgets(line2, MAX_LINE_LEN, fp2) != NULL;

        if (!read1 && !read2)  // both files reached EOF
            break;

        if (read1)
            printf("%s", line1);
        if (read2)
            printf("%s", line2);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}

```
## 2.	Write a C program to find the size of file using file handling functions
```c
#include <stdio.h>

int main() {
    FILE *fp;
    long size;

    // Open the file in binary read mode
    fp = fopen("input.txt", "rb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Move file pointer to end
    fseek(fp, 0, SEEK_END);

    // Get current position of file pointer which is the size
    size = ftell(fp);

    fclose(fp);

    printf("Size of the file is %ld bytes.\n", size);

    return 0;
}

```

<br>

# P4:

## 1.	Write a C program to write the details of three students into a file and read them and print.
```c
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student students[3];
    FILE *fp;
    int i;

    // Input details for 3 students
    for (i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  // read string with spaces
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    // Write student details to file in text mode
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (i = 0; i < 3; i++) {
        fprintf(fp, "%d %s %.2f\n", students[i].id, students[i].name, students[i].marks);
    }
    fclose(fp);

    // Read and print student details from the file
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Student details read from file:\n");
    for (i = 0; i < 3; i++) {
        fscanf(fp, "%d %s %f", &students[i].id, students[i].name, &students[i].marks);
        printf("ID: %d, Name: %s, Marks: %.2f\n", students[i].id, students[i].name, students[i].marks);
    }

    fclose(fp);

    return 0;
}

```
## 2.	Write a C program to count number of words in a given file
```c
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    int inWord = 0;
    int words = 0;
    int ch;

    // Open file in read mode
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch)) {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }

    // If file doesn't end with whitespace, count last word
    if (inWord) {
        words++;
    }

    fclose(fp);

    printf("Number of words in the file: %d\n", words);

    return 0;
}

```

<br>

# P5:  

## 1.	Write a C program to capitalize first letter of every line in text file 
```c
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    int ch;
    int newLine = 1; // Flag to track start of a new line

    fp = fopen("input.txt", "r+");  // open for reading and writing
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (newLine && isalpha(ch)) {
            // Capitalize first letter of the line
            ch = toupper(ch);
            fseek(fp, -1, SEEK_CUR); // Move back to overwrite
            fputc(ch, fp);
            fflush(fp);
            newLine = 0;
        } else if (ch == '\n') {
            newLine = 1;
        } else if (!isspace(ch)) {
            newLine = 0;
        }
    }

    fclose(fp);
    printf("First letters of each line capitalized successfully.\n");
    return 0;
}

```
## 2.	Write a C program to count number of blank lines and comments in a given text file.
```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE_LEN 512

int is_blank_line(const char *line) {
    for (int i = 0; line[i] != '\0'; i++) {
        if (!isspace(line[i]))
            return 0; // Not blank
    }
    return 1; // Blank line
}

int main() {
    FILE *fp;
    char line[MAX_LINE_LEN];
    int blank_lines = 0;
    int comment_lines = 0;
    int in_multiline_comment = 0;

    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(line, MAX_LINE_LEN, fp) != NULL) {
        // Check blank line
        if (is_blank_line(line)) {
            blank_lines++;
            continue;
        }

        // Check comments
        char *trim_line = line;
        // Skip leading whitespace
        while (*trim_line && isspace(*trim_line)) trim_line++;

        if (in_multiline_comment) {
            comment_lines++;
            // Check for end of multiline comment
            if (strstr(trim_line, "*/") != NULL) {
                in_multiline_comment = 0;
            }
        } else if (strncmp(trim_line, "//", 2) == 0) {
            // Single-line comment
            comment_lines++;
        } else if (strncmp(trim_line, "/*", 2) == 0) {
            // Start of multiline comment
            comment_lines++;
            if (strstr(trim_line, "*/") == NULL) {
                in_multiline_comment = 1;
            }
        }
    }

    fclose(fp);

    printf("Number of blank lines: %d\n", blank_lines);
    printf("Number of comment lines: %d\n", comment_lines);

    return 0;
}

```


