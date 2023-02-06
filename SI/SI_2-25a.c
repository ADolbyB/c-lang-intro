/**
Joel Brigida
SI Session: 2/25/2020
*/

#include <stdio.h>
#include <math.h>

void Q2();
void Q1();
double getNum(void);

int main()
{
    Q1();
    Q2();

    return 0;
}

double getNum(void)
{
    double n;
    printf("Enter a number: ");
    scanf("%lf", &n);
    return n;
}

void Q1()
{
        char ch='V';

    ('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z') ?
        printf("This is a letter\n") :
            printf("This is not a letter\n");
}

void Q2()
{
    double number = getNum(), square_root;
    if (number >= 0)
    {
        square_root = sqrt(number);
        printf("The square root of %f is %f", number, square_root);
    }

    else
        printf("%f is negative!!", number);
}