/**
Joel Brigida
Test Code to test Logical NOT (!) operation in different circumstances
Source: https://www.includehelp.com/c/logical-not-operator-with-example-in-c.aspx
**/

#include <stdio.h>


void Q1(void);
void Q2(void);


int main()
{

    Q1();
    Q2();

}

void Q1(void)
{

    int num = 10;

    // C program to demonstrate example of Logical NOT (!) operator
    // printing result with OR (||) operator

    printf("%d\n", !(num == 10));
    printf("%d\n", !(num != 10));
    printf("%d\n", !(num > 5));
    printf("%d\n", !(num < 5));

    printf("\n\n");

}

void Q2(void)
{

    // C program to demonstrate example of Logical NOT (!) operator

    int y, z;

    printf("Enter year: ");                                     ///input year
    scanf("%d", &y);

    if ((y % 400 == 0 ) || ( y % 4 == 0 && y % 100 != 0 ))      ///check condition
        printf("%d is a leap year\n", y);
    else
        printf("%d is not a leap year\n", y);

}
