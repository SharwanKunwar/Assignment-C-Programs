#include<stdio.h>

//Author: Sharwan jung kunwar
//Purpose: To 


FILE *fp;
int main(){
    char ch;

    

    fp= fopen("Box.txt","r");
    if(fp == NULL){
        printf("This file is exist\n");
    }else{
        while((ch=fgetc(fp)) != EOF){
            printf("%c",ch);
        }
    }
    

    return 0;

}