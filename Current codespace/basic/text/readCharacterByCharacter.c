#include<stdio.h>

//Author: Sharwan jung kunwar
//Purpose: To 


FILE *fp;
int main(){

    char ch;

    fp = fopen("student.txt","r");

    if(fp == NULL){
        printf("Error opening file!\n");
    }
    else{
        
        while((ch=fgetc(fp)) != EOF){
            printf("%c",ch);
        }
    }

        fclose(fp);

    return 0;

}