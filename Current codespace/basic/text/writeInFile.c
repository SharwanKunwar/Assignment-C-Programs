#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//Author: Sharwan jung kunwar
//Purpose: To write someting in file 


FILE *fp;

int main(){
    char name[20];
    int age;
    char quote[100];

    fp = fopen("student.txt","w");
    if(fp == NULL){
        printf("This is not no more!!");
    }else{
        printf("File is created you can write it down.\n\n");
        printf("Enter your name : ");
        fgets(name, sizeof(name), stdin);
        
        printf("Enter your age : ");
        scanf("%d",&age);
        getchar();                              //eat new line
        printf("Enter a Quote : ");
        fgets(quote, sizeof(quote), stdin);

        fprintf(fp, "-------------------------------------------------------\n");
        fprintf(fp, "Name : %s\n",name);
        fprintf(fp, "Age : %d\n",age);
        fprintf(fp, "Quote : %s\n",quote);
        fprintf(fp, "-------------------------------------------------------\n");


    }
    

    return 0;

}