#include <stdio.h>
#include <stdlib.h>

// Author: Sharwan Jung Kunwar
// Purpose: To write a single student's data to a binary file without struct

int main() {
    FILE *fp;
    char name[20];
    int age;
    char address[50];

    fp = fopen("Box.dat", "wb");

    if (fp == NULL) {
        printf("Error: Unable to create file.\n");
        return 1;
    } else {
        printf("File created successfully.\n\n");

        // Take input
        printf("Enter name: ");
        fgets(name, sizeof(name), stdin);

        printf("Enter age: ");
        scanf("%d", &age);
        getchar(); // Clear newline after scanf

        printf("Enter address: ");
        fgets(address, sizeof(address), stdin);

        // Write data to binary file
        fwrite(name, sizeof(name), 1, fp);
        fwrite(&age, sizeof(age), 1, fp);
        fwrite(address, sizeof(address), 1, fp);

        printf("\nStudent information written to binary file.\n");

        fclose(fp);
    }

    return 0;
}
