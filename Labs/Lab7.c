/**
Joel Brigida
Dr. Sareh Taebi
Lab #7
COP2220-007
4-14-2020
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE_Q1 25
#define SIZE_Q2 4
#define SIZE_Q3 10


void line(void);
void tab(void);
void plate(int q);
void Q1(void);
void Q2(void);
void Q3(void);

int main()
{

    Q1();
    Q2();
    Q3();

    return 0;
}

void line(void)
{
    printf("\n");
}

void tab(void)
{
    printf("\t");
}

void plate(int q)
{
    line(), tab(), printf("=> Question #%d <=", q), line(), line();
}

void Q1 (void)
{
    plate(1);
    int i;

    double numfrc[SIZE_Q1] = { 0 };         // Part A & B
    numfrc[13] = 6.666;                     // Part C
    numfrc[14] = -6.666;                    // Part D
    numfrc[9] = 1.667;                      // Part E
    numfrc[6] = 3.333;                      // Part F

    printf("numfrc[14] = %.2f", numfrc[14]), line();                    // Part G
    printf("numfrc[9] = %.2f", numfrc[9]), line(), line();

    printf("< Table for Array \'numfrc[]\' >"), line(), line();         // Part H
    printf("Index:%4cValue:", ' '), line(), line();

    for (i = 0; i < SIZE_Q1; i++)
        {
            printf("[%2d]%6c%.3f\n", i, ' ', numfrc[i]);
        }

    line();
}

void Q2 (void)
{
    plate(2);

    int i, j;
    int intable[SIZE_Q2][SIZE_Q2] = { 0 };                              // Part A

    printf("Array \'intable[]\' has %ld elements", (sizeof(intable) / sizeof(intable[0][0]))), line(), line();     // Part B

    for (i = 0; i < SIZE_Q2; i++)                                       // Part C
        {
            for (j = 0; j < SIZE_Q2; j++)
                {
                    intable[i][j] = i + j;
                }
        }


    for (i = 0; i < SIZE_Q2; i++)                                       // Part D
        {
            for (j = 0; j < SIZE_Q2; j++)
                {
                    printf("[%d][%d] = %2d%2c", i, j, intable[i][j], ' ');
                }
            line(), line();
        }
}

void Q3 (void)
{
    plate(3);

    // #include <stdio.h>                       // need to remove the semicolon at end of statement
    // #define SIZE_Q3 = 10                     // edit constant macro SIZE_Q3 to 10 (was 100) and remove semicolon at end of statement

    int i, j;
    int b[SIZE_Q3] = { 0 };                     // redefine the constant macro SIZE to 10 instead of 100

    printf("1st array \'b[]\':"), line(), line();

    for (i = 0; i < SIZE_Q3; i++)
        {
            b[i] = 1;
            printf("[%d] = %d%2c", i, b[i], ' ');               // add printf for debugging output
            line();
        }

    line(), line(), printf("2nd array \'a[]\':"), line(), line();

    int a[2][2] = { {1, 2} , {3, 4} };          // remove the extra element value for the 2x2 loop
    a[1][1] = 5;                                // Correct a[1,1] to a[1][1] so it redefines a[1][1] to 5

    for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                {
                    printf("[%d][%d] = %d%2c", i, j, a[i][j], ' ');
                }
            line(), line();
        }
}