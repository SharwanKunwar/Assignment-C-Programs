#include<stdio.h>

//Author: Sharwan jung kunwar
//Purpose: A batsman scored 110 runs which included 3 boundaries and 8 sixes. What percent of his total score did he make by running between the wickets?  Write a C program.


int main(){

    int totalRuns = 110;
    int boundaries = 3;
    int sixes = 8;

    int boundaryRuns = boundaries * 4;  // 3 boundaries * 4 = 12
    int sixRuns = sixes * 6;           // 8 sixes * 6 = 48

    int runningRuns = totalRuns - (boundaryRuns + sixRuns);
    float percentage = ((float)runningRuns / totalRuns) * 100;

    printf("Runs by running between wickets = %d\n", runningRuns);
    printf("Percentage = %.2f%%\n", percentage);


    return 0;

}