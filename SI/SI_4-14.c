/**
Joel Brigida
SI 4-14-2020
*/

#include <stdio.h>
#define SIZE 6

void Q1_Q2();
void Q3();
void starbar();

int main()
{
    Q1_Q2();
    Q3();
    return 0;
}

void Q1_Q2()
{
    printf("Exercises #1 & #2:\n\n");

    //1a & 2a:
    //What is the appropriate declaration of
    //array eggs?
    //Write the assignment statement using an
    //initializer list that initializes array eggs
    int eggs[SIZE] = {3,4,0,8,2,1}, size, i;

    //calculate size of array
    //practice with sizeof() function
    size = sizeof(eggs)/sizeof(eggs[0]);

    //prints all values in array eggs
    for (i = 0; i < size; i++)
    {
        printf("%3d", eggs[i]);
    }

    //1b:
    //In the subscripted variable eggs[i],
    //what does subscript i represent?
    printf("\n\neggs[3] = %d\n\n", eggs[3]);    // subscript represents the position or index of the element
    printf("eggs[5] = %d\n\n", eggs[5]);

    //1c:
    //In which position of array eggs is
    //the value 4?
    printf("eggs[1] = %d\n\n", eggs[1]);        // value 4 is stored in position/index 1

    //1d:
    //What is the value of integer variable
    //chick if chick = eggs[3] / eggs[1]?
    int chick;
    chick =  eggs[3] / eggs[1];
    printf("chick = %d\n\n", chick);

    //1e:
    //What value is returned by sizeof(eggs)
    //if sizeof(eggs[2]) is 4?
    printf("size of eggs[2] = %d bytes\n\n", sizeof(eggs[2]));
    printf("size of eggs = %d bytes\n\n", sizeof(eggs));
    printf("# of elements in array eggs is %d\n\n", sizeof(eggs)/sizeof(eggs[2]));


    //1f:
    //What does the following for loop display?
    for (i = 0; i < size; i += 2)
        printf("%3d", eggs[i]);
    printf("\n\n");

    //2b
    //Write a for loop that would allow the user to enter values consecutively for array eggs
    for (i = 0; i < size; i++)
    {
        printf("Enter values for egg> ");
        scanf("%d", &eggs[i]);
    }
    printf("\n");
    //print all the values of array eggs
    for (i = 0; i < size; i++)
    {
        printf("%3d", eggs[i]);
    }
    starbar();
}

void Q3()
{
    //3a
    //edit the initializer list to place the first three elements into the first row,
    //the next two elements into the second row, and the last four elements into the third row.
    int peeps[3][4] = { {15, 84, 34}, {62, 40}, {12, 9, 4, 36} };
    int i, j;

    //3b
    //Write a nested loop to print the contents of array peeps
    for (i = 0; i < 3; i++) //row count
    {
        for (j = 0; j < 4; j++) //column count; prints all elements in row i
        {
            printf("%5d", peeps[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //3c
    //Write assignment statements for each �empty� array element
    //to assign them values of your choice.
    peeps[0][3] = peeps[0][1] + peeps[0][2];    //updates value of element in first row, last column

    //print contents of array peeps to show the array with its new values
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%5d", peeps[i][j]);
        }
        printf("\n");
    }
    starbar();
}

void starbar()
{
    int i;
    printf("\n\n");
    for(i = 0; i < 55; i++)
        printf("*");
    printf("\n");
}
