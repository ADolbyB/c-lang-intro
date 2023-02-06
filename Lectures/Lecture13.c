/**
Joel Brigida
Lecture 13 - Loops
*/

#include <stdio.h>
#include <stdlib.h>
#define ROWS 6
#define CHARS 10

void tab(void);
void line(void);
void Q1a(void);
void Q1b(void);
void Q2(void);
void Q3(void);
void Q4(void);
void Q5(void);
void Q6(void);
void Q7(void);
void Q8(void);
void Q9(void);
void Q10(void);

int main()
{

    //Q1a();
    //Q1b();
    //Q2();
    //Q3();
    //Q4();
    //Q5();
    //Q6();
    //Q7();
    //Q8();
    Q9();
    //Q10();

    return 0;
}

void tab(void)
{
    printf("\t");
}
void line(void)
{
    printf("\n");
}

void Q1a(void)
{
    tab(), printf("=> Example #1a <="), line(), line();

    char grade;

    printf("Enter buffer input for output: ");

    while ( ( grade = getchar()) != EOF )
        {

            putchar(grade);
            printf("\nEnter next buffer input for output: ");

        }

    line(), line();
}

void Q1b(void)
{
    tab(), printf("=> Example #1b <="), line(), line();

    int course, credit_hours, input_status;
    char grade;

    printf("Enter 2 integers and one character: ");
    input_status = scanf(" %d %d %c", &course, &credit_hours, &grade);

    while (input_status != EOF)
        {
            printf("\n\nYou're doing good so far!\n\n");
            input_status= scanf(" %d %d %c", &course, &credit_hours, &grade);
            printf("\n\ninput_status = %d", input_status);
        }
        printf("\n\ninput_status = %d", input_status);

    line(), line();
}

void Q2(void)
{
    tab(), printf("=> Example #2 <="), line(), line();

    char letter_choice;

    do {
            printf("Enter a letter from A through Z: ");
            scanf("%c", &letter_choice);

            if (letter_choice < 'A' || letter_choice > 'Z')
                printf("\n\nNot a valid choice, try again...");
            else printf("\n\nGood input, next step...");
        }

        while (letter_choice < 'A' || letter_choice > 'Z');

    line(), line();
}

void Q3(void)
{
    tab(), printf("=> Example #3 <="), line(), line();

    int counter = 1; /* initialize counter */

    do {

        printf( "%d ", counter ); /* display counter */

        }
        while ( ++counter <= 10 ); /* end do...while */

    line(), line();
}

void Q4(void)
{
    tab(), printf("=> Example #4 <="), line(), line();

    int secret_code = 13;
    int code_entered;


    do {

        printf("To enter the club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);

        }
        while (code_entered != secret_code);
            printf("Congratulations! You are a member!\n");

        line(), line();
}

void Q5(void)
{
    /* Accumulate sum of all scores. */

    tab(), printf("=> Example #5 <="), line(), line();

    int sum = 0;
    int sentinel = -1;
    int score;

    printf("Enter first score (or %d to quit): ", sentinel);

    for (scanf("%d", &score); score != sentinel; scanf("%d", &score))
        {
            sum += score;
            printf("Enter next score (%d to quit): ", sentinel);
        }

    printf("\nTotal sum of scores = %d\n", sum);

    line(), line();
}

void Q6(void)
{
    tab(), printf("=> Example #6 <="), line(), line();

    int sum = 0;
    int sentinel = -1;
    int score;

    printf("Enter first score (or %d to quit): ", sentinel);
    scanf("%d", &score);                /* Get first score. */

    while (score != sentinel)
        {
            sum += score;
            printf("Enter next score (%d to quit): ", sentinel);
            scanf("%d", &score);        /* Get next score. */
        }

    printf("\nSum of exam scores is %d\n", sum);

    line(), line();
}

void Q7(void)
{
    tab(), printf("=> Example #7 <="), line(), line();

    int i, j;

    for (i = 0; i < 5; ++i)
        for (j = 0; j < 10; ++j)
            {
                printf("*");
                printf("\n");
            }

    line(), line();
}

void Q8(void)
{
    tab(), printf("=> Example #8 <="), line(), line();

    int i,j;

    for (i = 0; i < 10; ++i)
        {
            for (j = i; j < 10; ++j)
                {
                    printf("*");
                }
            printf("\n");
        }

    line(), line();
}

void Q9(void)
{
    tab(), printf("=> Example #9 <="), line(), line();

    int row;
    char ch;

    for (row = 0; row < ROWS; row++)
        {
            for (ch = 'A'; ch < ('A' + CHARS); ch++)
                {
                    printf("%c", ch);

                }
            printf("\n");
        }
    line(), line();
}

void Q10()
{
    tab(), printf("=> Example #10 <="), line(), line();

    int i, j;

    for (i = 0; i < 6; ++i)
        for (j = 0; j < 5; ++j)
            printf("**********\n");

    line(), line();
}