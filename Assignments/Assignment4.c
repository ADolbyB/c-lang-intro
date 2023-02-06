/**
Joel Brigida
Dr. Sareh Taebi
COP2220-007
April 2, 2020
Assignment #4
*/

#include <stdio.h>
#include <stdlib.h>

void line(void);
void tab(void);
void Q1(void);
void Q2(void);
void Q3(void);
void Q4(void);
void Q5(void);
double pi_approx(int denom);

int main()
{

    //Q1();
    //Q2();
    //Q3();
    //Q4();
    Q5();
    //printf("Pi = %f", pi_approx(10000000));

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

void Q1(void)
{

    tab(), printf("=> Question #1: How Fast Is Your Computer? <="), line(), line();

    int counter = 1;

    while (counter <= 300000000)
        {
            if (0 == counter % 100000000)
                printf("counter = %d", counter), line();
            counter += 1;
        }
    line(), printf("According to my watch: each 100,000,000 repetitions took %.3f seconds on my PC.", (0.7/3)), line();

}

void Q2(void)
{

    line(), tab(), printf("=> Question #2: Sum of integers <="), line(), line();

    int n, count, sum;

    printf("Please enter an integer for \'n\': ");
    scanf("%d", &n), line();

    sum = 0;
    count = 0;

    while (count <= n)
            {
                sum = sum + count++;
            }

        printf("The sum of all integers from 0 to %d is %d", n, sum), line(), line();

        if (sum == (n * (n + 1)) / 2)
            {
                printf("The values are equivalent"), line();
                printf("Conclusion: The sum of all integers <= %d = ((%d * %d) / 2) = %d", n, n, n + 1, ((n * (n + 1)) / 2)), line();
            }
        else printf("The values are not equivalent"), line();

}

void Q3(void)                                   // This pi approximation function DOES print in table format.
{

    line(), tab(), printf("=> Question #3: PI Approximation <="), line(), line();

    int d = 3;                                  // Denominator of operand - begins at 3 for (4/3)
    int test;                                   // User input test variable to test infinite series
    double pi;                                  // Approximation of PI after series is complete
    int series = 1;                             // Counts calculation position in the infinite series. 1st calculation performed in series is 4 - (4/3), so we start there at 1.

    printf("Enter an integer for # of fractions calculated in infinite PI series: ");
    scanf("%d", &test);

    printf("PI value:     Series:"), line(), line();



    for (pi = 4.0; series <= test; )
        {
            if (0 != series % 2)
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


    line(), line();
    printf("PI = %f at #%d in the series.", pi_approx(627), 627), line();
    printf("PI = %f at #%d in the series.", pi_approx(1685), 1685), line();
    printf("PI = %f at #%d in the series.", pi_approx(10735), 10735), line();
    printf("PI = %f at #%d in the series.", pi_approx(317099), 317099), line();


}
void Q4(void)
{

    line(), tab(), printf("=> Question #4: Secret Code <="), line(), line();

    int passcode = 6969;
    int user_entry;
    int attempts = 0;


    do {

        printf("To Access the Secret Room\n");
        printf("Please enter the passcode: ");
        scanf("%d", &user_entry);
        attempts++;

        }
        while (user_entry != passcode && attempts < 4);

        if (user_entry == passcode && attempts <= 4)
            {
                line();
                printf("Welcome to the Secret Room!");
                line();
            }

        else
            {
                line();
                printf("You have been LOCKED OUT due to 4 failed attempts.");
                line();
            }

}

void Q5(void)
{

    line(), tab(), printf("=> Question #5: <="), line(), line();


    int x, y, count;
    count = 0;                              // Counts total number of loop iterations completed

    for (y = 0; count <= 5 ? y <= 5 : y >= 0 ; count <=5 ? y++ : y--)
        {
            for (x = 0; x <= y; x++)
                {
                    printf("%d", x);
                }
            printf("\n");
            count++;
        }

    line();

}

double pi_approx(int user)                      // This user defined pi_approx function DOES NOT print the table format
{

    int denom = 3;                              // Denominator of operand - begins at 3 for (4/3)
    double pi;                                  // Approximation of PI after series is complete
    int series = 1;                             // Counts calculation position in the infinite series. 1st calculation performed in series is 4 - (4/3), so we start at 1.

    for (pi = 4.0; series <= user; )
        {
            if (0 != series % 2)
                {
                    pi = pi - (4.0 / denom);
                    denom += 2;
                    series += 1;
                }
            else
                {
                    pi = pi + (4.0 / denom);
                    denom += 2;
                    series += 1;
                }

        }

    return (pi);

}
