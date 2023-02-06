/**
Joel Brigida
COP2220: Intro to Programming in C
Discussion Extra Credit #1
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x1 = 5;
    int i = 2;

    int y1 = i * x1 + ++i;                          // What are the values of y1, i and x1 after execution?

    printf("The value of y1 is: %d\n", y1);         // y1 = 13
    printf("The value of i is: %d\n", i);           // i = 3
    printf("The value of x1 is: %d\n\n", x1);       // x1 = 5

    int x2 = 5;

    int y2 = (4 + x2++) + (6 + x2++);               // What are the values of x2 and y2 after execution?

    printf("The value of x2 is: %d\n", x2);         // x2 = 7
    printf("The value of y2 is: %d\n", y2);         // y2 = 21

    return 0;
}