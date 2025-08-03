<br>

# P1:

## 1.	Write a C program to read and print the content of a file.
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;

    // Ask user to enter the filename
    printf("Enter the filename to read: ");
    scanf("%s", filename);

    // Open file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Read and print each character until EOF
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}

```

## 2.	Write a C program to delete a specific line from the file
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file, *tempFile;
    char filename[100], tempFilename[] = "temp.txt";
    char line[1024];
    int lineToDelete, currentLine = 1;

    // Get filename and line number to delete
    printf("Enter the filename: ");
    scanf("%s", filename);
    printf("Enter the line number to delete: ");
    scanf("%d", &lineToDelete);

    // Open original file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Open temp file for writing
    tempFile = fopen(tempFilename, "w");
    if (tempFile == NULL) {
        printf("Could not create temporary file.\n");
        fclose(file);
        return 1;
    }

    // Copy all lines except the line to delete
    while (fgets(line, sizeof(line), file)) {
        if (currentLine != lineToDelete) {
            fputs(line, tempFile);
        }
        currentLine++;
    }

    fclose(file);
    fclose(tempFile);

    // Remove original file and rename temp file to original file
    if (remove(filename) != 0) {
        printf("Error deleting original file.\n");
        return 1;
    }
    if (rename(tempFilename, filename) != 0) {
        printf("Error renaming temporary file.\n");
        return 1;
    }

    printf("Line %d deleted successfully from %s\n", lineToDelete, filename);
    return 0;
}

```


<br>

# P2:

## 1.	Write a C Program to find the number of lines in a text file
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    int lines = 0;
    char ch;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Count lines by counting '\n' characters
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }

    // If file is not empty and last line does not end with '\n', count that line as well
    fseek(file, 0, SEEK_END);
    if (ftell(file) > 0) {
        fseek(file, -1, SEEK_END);
        if (fgetc(file) != '\n') {
            lines++;
        }
    }

    fclose(file);

    printf("Number of lines in the file: %d\n", lines);

    return 0;
}

```

## 2.	 Write a C program to replace a specific line in text file.
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main() {
    FILE *file, *tempFile;
    char filename[100], tempFilename[] = "temp.txt";
    char line[MAX_LINE_LENGTH];
    char newLine[MAX_LINE_LENGTH];
    int lineToReplace, currentLine = 1;

    // Input file name and line to replace
    printf("Enter the filename: ");
    scanf("%s", filename);

    printf("Enter the line number to replace: ");
    scanf("%d", &lineToReplace);
    getchar();  // clear newline from buffer

    printf("Enter the new content for line %d:\n", lineToReplace);
    fgets(newLine, MAX_LINE_LENGTH, stdin);

    // Remove trailing newline from fgets if present
    size_t len = strlen(newLine);
    if (len > 0 && newLine[len - 1] == '\n') {
        newLine[len - 1] = '\0';
    }

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    tempFile = fopen(tempFilename, "w");
    if (tempFile == NULL) {
        printf("Could not create temporary file.\n");
        fclose(file);
        return 1;
    }

    // Copy lines to temp file, replacing the target line
    while (fgets(line, sizeof(line), file)) {
        if (currentLine == lineToReplace) {
            fprintf(tempFile, "%s\n", newLine);
        } else {
            fputs(line, tempFile);
        }
        currentLine++;
    }

    fclose(file);
    fclose(tempFile);

    // Replace original file with temp file
    if (remove(filename) != 0) {
        printf("Error deleting original file.\n");
        return 1;
    }
    if (rename(tempFilename, filename) != 0) {
        printf("Error renaming temporary file.\n");
        return 1;
    }

    printf("Line %d replaced successfully.\n", lineToReplace);
    return 0;
}

```


<br>

# P3:

## 1.	Write a C Program to capitalize every word in text file
```c
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1024

// Function to capitalize every word in a line
void capitalizeWords(char *line) {
    int capitalizeNext = 1; // Flag to capitalize the next character

    for (int i = 0; line[i] != '\0'; i++) {
        if (isspace(line[i]) || line[i] == '\t' || line[i] == '\n') {
            capitalizeNext = 1;
        } else if (capitalizeNext && isalpha(line[i])) {
            line[i] = toupper(line[i]);
            capitalizeNext = 0;
        } else {
            line[i] = tolower(line[i]);
        }
    }
}

int main() {
    FILE *file, *tempFile;
    char filename[100], tempFilename[] = "temp.txt";
    char line[MAX_LINE_LENGTH];

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    tempFile = fopen(tempFilename, "w");
    if (tempFile == NULL) {
        printf("Could not create temporary file.\n");
        fclose(file);
        return 1;
    }

    // Read each line, capitalize words, write to temp file
    while (fgets(line, sizeof(line), file)) {
        capitalizeWords(line);
        fputs(line, tempFile);
    }

    fclose(file);
    fclose(tempFile);

    // Replace original file with temp file
    if (remove(filename) != 0) {
        printf("Error deleting original file.\n");
        return 1;
    }
    if (rename(tempFilename, filename) != 0) {
        printf("Error renaming temporary file.\n");
        return 1;
    }

    printf("All words capitalized successfully in %s\n", filename);
    return 0;
}

```

## 2.	Write a C program copy the content of one file to another file
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceFilename[100], destFilename[100];
    char ch;

    // Get source and destination filenames
    printf("Enter the source filename: ");
    scanf("%s", sourceFilename);

    printf("Enter the destination filename: ");
    scanf("%s", destFilename);

    // Open source file in read mode
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Could not open source file %s\n", sourceFilename);
        return 1;
    }

    // Open destination file in write mode
    destFile = fopen(destFilename, "w");
    if (destFile == NULL) {
        printf("Could not open destination file %s\n", destFilename);
        fclose(sourceFile);
        return 1;
    }

    // Copy character by character from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully from %s to %s\n", sourceFilename, destFilename);

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}

```


<br>

# P4:

## 1.	Write a C Program to reverse first n characters in a given file
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    long fileSize;
    int n;

    printf("Enter the filename: ");
    scanf("%s", filename);

    printf("Enter the number of characters to reverse: ");
    scanf("%d", &n);

    file = fopen(filename, "r+");  // open for reading and writing
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Find file size
    fseek(file, 0, SEEK_END);
    fileSize = ftell(file);

    if (n > fileSize) {
        printf("Number of characters to reverse is more than file size (%ld).\n", fileSize);
        fclose(file);
        return 1;
    }

    // Allocate memory to hold the entire file content
    char *buffer = (char *)malloc(fileSize);
    if (buffer == NULL) {
        printf("Memory allocation failed.\n");
        fclose(file);
        return 1;
    }

    // Read the entire file content into buffer
    rewind(file);
    fread(buffer, 1, fileSize, file);

    // Reverse the first n characters in the buffer
    for (int i = 0; i < n / 2; i++) {
        char temp = buffer[i];
        buffer[i] = buffer[n - 1 - i];
        buffer[n - 1 - i] = temp;
    }

    // Write the modified buffer back to file
    rewind(file);
    fwrite(buffer, 1, fileSize, file);

    printf("First %d characters reversed successfully.\n", n);

    free(buffer);
    fclose(file);
    return 0;
}

```

## 2.	Write a C program to convert the content of file to upper case
```c
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    long fileSize;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r+");  // open for reading and writing
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Find file size
    fseek(file, 0, SEEK_END);
    fileSize = ftell(file);
    rewind(file);

    // Allocate buffer for file content
    char *buffer = (char *)malloc(fileSize + 1);
    if (buffer == NULL) {
        printf("Memory allocation failed.\n");
        fclose(file);
        return 1;
    }

    // Read file content into buffer
    fread(buffer, 1, fileSize, file);
    buffer[fileSize] = '\0';  // Null-terminate string

    // Convert content to uppercase
    for (int i = 0; i < fileSize; i++) {
        buffer[i] = toupper((unsigned char)buffer[i]);
    }

    // Write the uppercase content back to the file
    rewind(file);
    fwrite(buffer, 1, fileSize, file);

    // Truncate the file to the current position (in case uppercase content is shorter)
    fflush(file);
#ifdef _WIN32
    _chsize(_fileno(file), fileSize);
#else
    ftruncate(fileno(file), fileSize);
#endif

    printf("File content converted to uppercase successfully.\n");

    free(buffer);
    fclose(file);
    return 0;
}

```


<br>

# P5:  
## 1.	 Write a C program to count number characters in a given file
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    int count = 0;
    char ch;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Read each character until EOF and count
    while ((ch = fgetc(file)) != EOF) {
        count++;
    }

    fclose(file);

    printf("Total number of characters in the file: %d\n", count);
    return 0;
}

```

## 2.	Write a C program to merge two file into third file.
```c
#include <stdio.h>
#include <stdlib.h>

void copyFileContent(FILE *source, FILE *dest) {
    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }
}

int main() {
    FILE *file1, *file2, *file3;
    char filename1[100], filename2[100], filename3[100];

    // Get file names
    printf("Enter the first filename: ");
    scanf("%s", filename1);

    printf("Enter the second filename: ");
    scanf("%s", filename2);

    printf("Enter the destination filename (merged file): ");
    scanf("%s", filename3);

    // Open files
    file1 = fopen(filename1, "r");
    if (file1 == NULL) {
        printf("Could not open file %s\n", filename1);
        return 1;
    }

    file2 = fopen(filename2, "r");
    if (file2 == NULL) {
        printf("Could not open file %s\n", filename2);
        fclose(file1);
        return 1;
    }

    file3 = fopen(filename3, "w");
    if (file3 == NULL) {
        printf("Could not create file %s\n", filename3);
        fclose(file1);
        fclose(file2);
        return 1;
    }

    // Copy content of first file
    copyFileContent(file1, file3);
    // Optionally add a newline or separator
    fputc('\n', file3);

    // Copy content of second file
    copyFileContent(file2, file3);

    printf("Files merged successfully into %s\n", filename3);

    // Close files
    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}

```



