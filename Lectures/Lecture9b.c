/**
Joel Brigida
Lecture 9 - Creating a swap function to test later.
The swap function swaps the 2 values of X and Y if X < Y.
(Intention is to always store the larger variable in X)
COP 2220
*/

#include <stdio.h>

int swap(int x, int y);            // Swap function prototypes.
int vote_swap(void);
void Q1(void);

int main()
{
    Q1();                          // User defined function that swaps vote tally for 2 candidates.
}

int swap (int x, int y)
{
    int temp;                      // local variable used as a backup.

    if (x < y)
    {
        temp = y;                  // Backs up variable y into variable "temp"
        y = x;                     // Make larger variable Y = X
        x = temp;                  // Takes backed up variable and dumps into X

    }
    return x;
}

int vote_swap(void)
{

    int bernie_vote, donald_vote;

    printf("Please enter US vote total for Donald Trump: ");
    scanf("%d", &donald_vote);
    printf("\nPlease enter US vote total for Bernie Sanders: ");
    scanf("%d", &bernie_vote);

    int votes = swap(donald_vote, bernie_vote); // using swap funtion to determine "votes"

    printf("\nDonald Trump Wins!\n");
    printf("\nTotal votes for Trump = %d\n\n", votes);

    return 0;
}

void Q1(void)
{
    vote_swap();
}