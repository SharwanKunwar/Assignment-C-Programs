#include <stdio.h>

int main() {
    FILE *fp;
    char name[20];
    int age;
    char address[50];

    fp = fopen("Box.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fread(name, sizeof(name), 1, fp);
    fread(&age, sizeof(age), 1, fp);
    fread(address, sizeof(address), 1, fp);

    printf("Name: %s", name);       // fgets adds '\n', so no extra \n needed
    printf("Age: %d\n", age);
    printf("Address: %s", address); // fgets adds '\n'

    fclose(fp);
    return 0;
}
