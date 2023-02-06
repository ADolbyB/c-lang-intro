/**
Joel Brigida
SI Session: 2/25/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void character_id(void);
void Q1(void);
void square_root_func(void);
void Q2(void);
void square_root_2(void);
void Q3(void);

int main()
{

    Q1();                 // Identifies whether an ASCII is a letter or not.
    //Q2();               // Performs square root of positive numbers, or outputs warning message is input is < 0.
    Q3();                 // Alternate ternary conditional if/then for square root function.

    return 0;
}

void character_id(void)
{
    char ch;
    printf("Please enter an ASCII: ");
    scanf("%c", &ch);

    ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' ?
        printf("\n\nCharacter is a letter.\n\n") :
            printf("\n\nCharacter is not a letter.\n\n");
}

void Q1(void)
{
    character_id();
}

void square_root_func(void)
{
    double result, number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number >= 0)
    {
        result = sqrt(number);
        printf("\nThe square root of %f is %f\n\n", number, result);
    }
    else
    {
        printf("\n%f is less than zero!!\n\n", number);
    }
}

void Q2(void)
{
    square_root_func();
}

void square_root_2(void)
{
    double result2, number2;

    printf("Enter a number: ");
    scanf("%lf", &number2);

    number2 >= 0 ? result2 = sqrt(number2),
        printf("\nThe square root of %f is %f\n\n", number2, result2) :
            printf("\n%f is less than Zero!!\n\n", number2);
}

void Q3(void)
{
    square_root_2();
}