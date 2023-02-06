/**
Joel Brigida
Lecture 9 - Creating a swap function to test later.
The swap function swaps the 2 values of X and Y if X < Y.
(Intention is to always store the larger variable in X)
COP 2220
*/

#include <stdio.h>

int swap (int x, int y);            // Swap function prototype

int main()
{
    int bernie_vote = 10e6;
    int donald_vote = 5e6;

    int result = swap(bernie_vote, donald_vote);            // using swap funtion to determine "result"

    printf("Bernie Wins!\n");
    printf("Bernie's votes are %d votes", result);

    return 0;
}

int swap (int x, int y)
{
    int temp;               // local variable used as a backup

    if (x < y)
    {
        temp = y;           // Backs up variable y into variable "temp"
        y = x;              // Make larger variable Y = X
        x = temp;           // Takes backed up variable and dumps into X
    }
    return x;
}