#include<stdio.h>

//Author: Sharwan jung kunwar
//Purpose: To read the binary file using file handling concept.


FILE *fp;
int main(){

    char name[20];
    int age;
    char address[50];




    fp = fopen("Box.dat","rb");
    if(fp == NULL){
        printf("The fiel is no more create it first.");
        return 1;
    }else{
        printf("File is found data is below\n\n");

        // Read binary data
        fread(name, sizeof(name), 1, fp);
        fread(&age, sizeof(age), 1, fp);
        fread(address, sizeof(address), 1, fp);

        // Print it
        printf("Name: %s", name);
        printf("Age: %d\n", age);
        printf("Address: %s", address);



    }


    return 0;

}