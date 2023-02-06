/**
Joel Brigida
Dr. Sareh Taebi
COP2220-007
Assignment # 5
04-26-2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

void line(void);
void tab(void);
void plate(int q);
void Q1(void);
void Q2(void);
void Q3(void);
void Q4(void);
void sum_n_avg(double input1, double input2, double input3, double *sum, double *avg);
void starts_with(void);

int main()
{

    Q1();
    Q2(); // Working executable function for Q2() that calculates sum and average of 3 numbers and prints the results.
    /** For Q2() the function call in main() would look like this:

    double one, two, three, sum_of_3, avg_of_3;

    printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &one, &two, &three);

    sum_n_avg(one, two, three, &sum_of_3, &avg_of_3);

    */

    Q3();
    Q4();


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

    int x, y;

    int matrix[10][10] = {0};

    for (y = 0; y < 10; y++)
        {
            for (x = 0; x < 10; x++)
                {
                    if ((y * y) == (x * x))
                        {
                            matrix[y][x] = (y * x);
                        }
                    printf("%3d", matrix[y][x]);
                }
            printf("\n");
        }

    line(), line();

}

void sum_n_avg(double input1, double input2, double input3, double *sum, double *avg)
{

    *sum = (input1 + input2 + input3);
    *avg = (input1 + input2 + input3) / 3.0;

}

void Q2(void)
{

    double one, two, three, sum_of_3, avg_of_3;

    printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &one, &two, &three);

    sum_n_avg(one, two, three, &sum_of_3, &avg_of_3);

    printf("Sum = %.3f", sum_of_3), line();
    printf("Average = %.3f", avg_of_3);

    line();

}

void Q3(void)
{

    plate(3);
    starts_with();

}

void Q4 (void)
{

    plate(4);

    char string[101] = "\0";
    int i;

    printf("Enter a string array (limit 100 characters):\n");
    getchar();                                                  // tip from Verneshia
    fgets(string, sizeof(string), stdin), line();               // produces proper output display. source: https://stackoverflow.com/questions/1694036/why-is-the-gets-function-so-dangerous-that-it-should-not-be-used
    //gets(string);                                             // gets() Produces incorrect output
    printf("You entered: "), line();
    puts(string);

    line();

    for (i = 0; i < strlen(string); i++)
        {
            if (ispunct(string[i]))
                string[i] = '_';
            else if (isspace(string[i]))
                string[i] = '_';
        }

    printf("Changing spaces and punctuation to \'_\' outputs:"), line();
    puts(string);

    line();


}

void starts_with(void)
{

    char letter;
    char word[56] = "\0";
    char message[26] = " starts with the letter ";
    char phrase[55] = "\0";

    printf("Enter 1 word < 25 characters, or \'#\' to exit:\n");
    //fgets(word, sizeof(word), stdin);                         // doesn't produce correct output.
    //gets(word);                                               // doesn't produce correct output.
    scanf("%s", word);                                          // only way to produce correct output.
    line();

    letter = word[0];

    if (letter != '#')
        {
            strcat(word, message);
            strcat(phrase, word);
            phrase[strlen(phrase)] = letter;
            phrase[strlen(phrase)] = '\0';
            puts(phrase);
            line();
            starts_with();
        }
    else {}
}
