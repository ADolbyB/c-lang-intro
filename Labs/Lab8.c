/**
Joel Brigida
Dr. Sareh Taebi
COP2220-007
Lab #8
4/22/2020
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE_Q1 5

void line(void);
void tab(void);
void plate(int q);
void zero(double bigNums[]);                                /// Q2 part a: function prototype
int add1AndSum(int oneTooSmall[]);                          /// Q2 part c & d: function prototype
void Q1(void);
void Q3(void);

int main()
{

    Q1();

    /**
    Q2()
    void zero(double bigNums[]);                            // Q2 part a: function prototype
    double sample_array[5] = {1.0, 1.1, 1.2, 1.3, 1.4};     // sample array for function zero
    zero(sample_array);                                     // Q2 part b: function call for function prototype void zero(double bigNums[]);

    int add1AndSum(int oneTooSmall[]);                      // Q2 part c: function prototype
    int sample_array2[5] = {1, 2, 3, 4, 5};                 // Sample array for function add1And Sum
    total = add1AndSum(sample_array2);                      // Q2 part d: Function call for function prototype w/ return value
    */

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

    int apples[SIZE_Q1] = {2, 4, 6, 8, 10};                             // Part a
    int *aPtr;                                                          // Part b

    int i, j;
    printf("Values for array apples:"), line();
    for (i = 0; i < 5; i++)
        printf("[%d] = %d%2c", i, apples[i], ' ');                      // Part c

    line(); line();

    aPtr = apples;                                                      // Part d
    aPtr = &apples[0];

    printf("Pointer aPtr is pointing to address %p", aPtr);             // Part e
    line(), line();

    for (j = 0; j < 5; j++)                                             // Part f
        {
            printf("*(aPtr + %d) = %d", j, *(aPtr + j));
            line();
        }

    line();
    printf("aPtr + 3 references address %p and stores value %d", aPtr + 3, *(aPtr + 3));        // Part g
    line(), line();

    printf("aPtr + 0 = %p, &apples[0] = %p", aPtr, &apples[0]), line();                         // debug
    printf("aPtr + 1 = %p, &apples[1] = %p", aPtr + 1, &apples[1]), line();
    printf("aPtr + 2 = %p, &apples[2] = %p", aPtr + 2, &apples[2]), line();
    printf("aPtr + 3 = %p, &apples[3] = %p", aPtr + 3, &apples[3]), line();
    printf("aPtr + 4 = %p, &apples[4] = %p", aPtr + 4, &apples[4]), line(), line();

    aPtr = &apples[4];
    printf("Address of apples[4] = %p", &apples[4]), line();                                    // Part h
    printf("aPtr now points to address %p", aPtr), line();
    printf("aPtr -= 4 now references address %p", aPtr -= 4), line();
    aPtr = &apples[4];
    printf("The value now stored in location aPtr -= 4 is %d", *(aPtr -= 4)), line(), line();

}

void Q3 (void)
{
    plate(3);

    double number1 = 7.3;
    double number2;
    double *fPtr;                                           // Part a
    fPtr = &number1;                                        // Part b

    printf("%.2f\n\n", *fPtr);                              // Part c

    number2 = *fPtr;                                        // Part d

    printf("%.2f\n\n", number2);                            // Part e

    printf("address of number1 = %p\n\n", &number1);        // Part f
    printf("address stored in fPtr = %p\n\n", fPtr);        // Part g

    printf("The address of &number1 and the address stored in fPtr are the same.\n\n"); // Part g
}

void zero(double bigNums[])                                 // Q2 part a
{
    /// Sample function for Lab 8
}

int add1AndSum(int oneTooSmall[])                           // Q2 Part d
{
    /// Sample function for Lab 8
    return (0);
}
