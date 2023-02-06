/**
Joel Brigida
Dr. Sareh Taebi
COP2220-007
March 19, 2020
Lab 5
*/

#include <stdio.h>
#include <stdlib.h>

void newline(void); // Function which prints a new line escape sequence.
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

void newline(void)
{
    printf("\n");
}

void Q1(void)
{
    int i = 1;
    double n;

    printf("Watch out! Here come a bunch of fractions!\n");

    while (i < 30)
        {
            n = 1.0/i;
            printf(" %f", n);
            i += 1;
        }

    printf(" That\'s all, folks!\n");

    newline();
}

void Q2(void)
{
    int count = 0;
    int mult = 1;

    while (count < 7)
        {

            printf("%4d %4d\n", count, mult);
            count += 1;
            mult *=2;

        }

    newline();
}

void Q3(void)
{
    int count, next_num, sum;

    sum = 0;
    count = 0;
    while (count < 5)
        {
            count += 1;
            printf("Next number> ");
            scanf("%d", &next_num);
            sum += next_num;
        }

    printf("%d numbers were added; \n", count);
    printf("their sum is %d.\n", sum);
}