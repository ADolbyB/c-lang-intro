/**
Joel Brigida
COP2220: Intro to Programming in C
Testing loops for buffer overflow
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void line(void);
void tab(void);
void plate(int q);
void starts_with_X(void);
void starts_with_X1(void);
void Q1(void);
void Q2(void);
void Q3(void);

int main()
{

    //Q1();
    //Q2();
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

void Q1(void)
{
    plate(1);
    starts_with_X();
}

void starts_with_X(void)
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

    while (letter != '#')
        {
            strcat(word, message);
            strcat(phrase, word);
            phrase[strlen(phrase)] = letter;
            phrase[strlen(phrase)] = '\0';
            //puts(phrase);
            line();
            letter = getchar();
            puts(phrase);
            starts_with_X();
            //letter = getchar();
        }
}

void Q2(void)
{
    plate(2);
    starts_with_X1();
}

void starts_with_X1(void)
{
    char letter;
    char word[56] = "\0";
    char message[26] = " starts with the letter ";
    char phrase[55] = "\0";

    printf("Enter 1 word < 25 characters, or \'#\' to exit:\n");
    //fgets(word, sizeof(word), stdin); // doesn't produce correct output.
    //gets(word);                       // doesn't produce correct output.
    scanf("%s", word);                  // only way to produce correct output.
    line();

    letter = word[0];

    do {
        strcat(word, message);
        strcat(phrase, word);
        phrase[strlen(phrase)] = letter;
        phrase[strlen(phrase)] = '\0';
        //puts(phrase);
        line();
        letter = getchar();
        puts(phrase);
        starts_with_X();
        //letter = getchar();
    }
    while (letter != '#');
}

void Q3(void)
{
    plate(3);
    starts_with();
}

void starts_with(void)
{
    char letter;
    char word[56] = "\0";
    char message[26] = " starts with the letter ";
    char phrase[55] = "\0";

    printf("Enter 1 word < 25 characters, or \'#\' to exit:\n");
    //fgets(word, sizeof(word), stdin);           // doesn't produce correct output.
    //gets(word);                                 // doesn't produce correct output.
    scanf("%s", word);                            // only way to produce correct output.
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
