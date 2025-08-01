#include <stdio.h>

int main() {
    int totalVotes = 7500;
    float invalidPercent = 20.0;
    float candidate1Percent = 55.0;

    int invalidVotes = (invalidPercent / 100) * totalVotes;
    int validVotes = totalVotes - invalidVotes;

    int candidate1Votes = (candidate1Percent / 100) * validVotes;
    int candidate2Votes = validVotes - candidate1Votes;

    printf("Total valid votes: %d\n", validVotes);
    printf("Candidate 1 votes: %d\n", candidate1Votes);
    printf("Candidate 2 votes: %d\n", candidate2Votes);

    return 0;
}
