/**
Joel Brigida
Lecture 12
Practice For Loops
*/

#include <stdio.h>
#include <stdlib.h>

void newline(void);
void Q0(void);
void Q1(void);
void Q2(void);
int factorial (int n);
void temp_conversion (int begin_celsius, int end_celsius, int step_size);

int main()
{

    Q0();               /// Lecture video practice with increment & decrement
    Q1();
    Q2();

    return 0;
}

void newline(void)
{
    printf("\n");
}
void Q0(void)                       /// Prefix and Postfix Operators Practice
{
    int n = 4;
    int x = 4;
    int i, j, k, l;
    i = 2;
    k = 2;

    printf("Example of prefix and postfix operator:"), newline();
    printf("%3d %3d", --n, n), newline();               /// Decrements value of 'n' 1st, then prints 'n' 1st time, followed by printing value of 'n' again.
    printf("%3d %3d", x--, x);                          /// Prints value of 'x' 1st, decrements 'x', then prints value of 'x' a second time.

    newline(), newline();

    j = i++;
    printf("i: %d, j: %d", i, j);

    newline(), newline();

    l = k++;
    printf("k: %d, l: %d", k, l);

    newline(), newline();
}

void Q1(void)
{
    int n = 5;
    printf("Factorial of %d is %d", n, factorial(n));
    newline(), newline();
}

int factorial (int n)                   ///Computes n!: n * (n-1) * (n-2) * (n-3) ... * 2 * 1
{
    int result, i;
    result = 1;

        for (i = n; i > 1; --i)
            {
                result = result * i;
            }
        return (result);
}

void Q2(void)
{
    temp_conversion(0, 40, 3);              // NOT Rule!!!
    newline();
    //int begin_celsius = 0;
    //int end_celsius = 40;                 // Alternate way of doing it.
    //int step_size = 5;
}

void temp_conversion (int begin_celsius, int end_celsius, int step_size)
{
    int i;
    double farenheit;

    printf("Celsius   Farenheit"), newline();

    for (i = begin_celsius; i <= end_celsius; i += step_size)
        {
            farenheit = 1.8 * i + 32.0;
            printf("%7d   %9.2f", i, farenheit);
            newline();
        }
}