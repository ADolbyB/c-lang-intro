/**
Joel Brigida
SI 3-31-2020
*/

#include <stdio.h>
#include <stdlib.h>

void starbar(void);
void tab(void);
void line(void);
void Q1(void);
void Q2(void);
void Q3(void);
void Q4(void);
void Q5(void);
void Q6(void);
void Q7(void);
void Q8(void);
void Q9(void);
void Q10(void);
void pi_approximator(void);

int main()
{

    //Q1();
    //Q2();
    //Q3();
    //Q4();
    //Q5();
    //Q6();
    //Q7();
    //Q8();
    //Q9();
    Q10();
    //pi_approximator();

    return 0;
}

void starbar(void)
{
    printf("\n\n*****************************************\n\n");
}

void tab(void)
{
    printf("\t");
}

void line(void)
{
    printf("\n");
}
void Q1(void)
{
    int counter;

    for (counter = 1; counter <= 10; counter++)
        printf("%d ", counter);

    starbar();
}

void Q2(void)
{
    int counter = 1;

    while (counter <= 10)
        printf("%d ", counter++);

    starbar();
}

void Q3(void)
{
    int counter = 0;

    while (++counter <= 10)
        printf("%d ", counter);


    starbar();
}

void Q4(void)
{
    int int1, int2;

    do
        {
            printf("Please enter 1st integer: ");
            scanf("%d", &int1);

            printf("Please enter 2nd integer: ");
            scanf("%d", &int2);

        }
        while (!(int1 % int2 == 0 || int2 % int1 == 0));

    printf("\nThe integers %d and %d are evenly divisible to each other\n", int1, int2);

    starbar();
}

void Q5(void)
{
    int int1, int2;

    printf("Please enter 1st integer: ");
    scanf("%d", &int1);

    printf("Please enter 2nd integer: ");
    scanf("%d", &int2);

    if (!(int1 % int2 == 0 || int2 % int1 == 0))
        printf("\nThe integers %d and %d are not evenly divisible to each other\n\n", int1, int2), Q5();
    else if (int1 % int2 == 0 || int2 % int1 == 0)
        printf("\nThe integers %d and %d are evenly divisible to each other\n\n", int1, int2), starbar();
}

void Q6(void)
{

    int i, j, n, m;
    m = 3;
    n = 5;

    for (i = n; i > 0; --i)
        {
            for (j = i; j > 0; --j)
                {
                    printf("*");
                }
                printf("\n");
        }
    starbar();
}

void Q7(void)
{
    int i, j, n, m;
    m = 3;
    n = 0;

    for (n = i; i < 10; ++i)
        {
            for (j = i; j >= 0; --j)
                {
                    printf("$");
                }
                printf("\n");
        }

    starbar();
}

void Q8(void)
{
    int x, y;

    for (y = 0; y <= 5; y++)
        {
            for (x = 0; x < y; x++)
                {
                    printf("%d", x);
                }
            printf("\n");
        }
    for (y = 5; y >= 0; y--)
        {
            for (x = 0; x <= y; x++)
                {
                    printf("%d", x);
                }
            printf("\n");
        }
    starbar();
}

void Q9(void)
{
    int i, j, n;
    n = 0;

    for (i = n; i <= 5; ++i)
        {
            for (j = i; j >= 0; --j)
                {
                    printf("%d", j);
                }
                printf("\n");
        }

    for (i = n; i <= 5; ++i)
        {
            for (j = i; j <= 5; ++j)
                {
                    printf("%d", j);
                }
                printf("\n");
        }
    starbar();
}

void Q10(void)
{
    int x, y, count;
    count = 0;

    for (y = 0; count <= 5 ? y <= 5 : y >= 0 ; count <=5 ? y++ : y--)
        {
            for (x = 0; x <= y; x++)
                {
                    printf("%d", x);
                }
            printf("\n");
            count++;
        }
/**    for (y = 5; y >= 0; y--)                 /// This way uses 2 separate loop w/o the ternary operator in the FOR loop.
        {
            for (x = 0; x <= y; x++)
                {
                    printf("%d", x);
                }
            printf("\n");
        }
    starbar();
*/

}
void pi_approximator(void)
{
    tab(), printf("=> Question #3: PI Approximation <="), line(), line();

    int d = 3;                                  // Denominator of operand - begins at 3 for (4/3)
    int test;                                   // User input test variable to test infinite series
    double pi;                                  // Approximation of PI after series is complete
    int series = 1;                             // Counts calculation position in the infinite series. 1st calculation performed in series is 4 - (4/3), so we start at 1.

    printf("Enter an integer for # of fractions calculated in infinite PI series: ");
    scanf("%d", &test);

    printf("PI value:     Series:"), line(), line();

    for (pi = 4.0; series <= test; )
        {
            if (series % 2 != 0)
                {
                    pi = pi - (4.0 / d);
                    printf("%9f %10d", pi, series), line();
                    d += 2;
                    series += 1;
                }
            else
                {
                    pi = pi + (4.0 / d);
                    printf("%9f %10d", pi, series), line();
                    d += 2;
                    series += 1;
                }
        }
}