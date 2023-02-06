/**
Joel Brigida
SI 4-20-2020
Week 15
*/

#include <stdio.h>
#include <string.h>
#define SIZE 20

void Q1_Q2();
void Q3();
void Q4_Q5();
void Q6_Q7_Q8();
void Q9();
void Q10();
void Q11();
void somefun();
void starbar();

int main()
{
    //Q1_Q2();
    //Q3();
    //Q4_Q5();
    //Q6_Q7_Q8();
    Q9();
    //Q10();
    //Q11();
    return 0;
}

void Q1_Q2()
{
    printf("Exercises 1 & 2:\n\n");
    char name[] = {'F','e','s','s','\0'};   //add null character to initializer list to make character array a string

    //printf prints all characters of a string until it reaches the null character '\0'
    printf("%s\n", name);

    starbar();
}

void Q3()
{
    printf("Exercise 3:\n\n");
    char month[12][10] = {"January", "February", "March",
                "April", "May", "June", "July", "August",
                "September", "October", "November", "December"};
    int i;

    //month[1] is "January, month[2] is "February, month[3] is "March", etc.
    for(i = 0;i < 12; i++)
        printf("%15s\n", month[i]);

    starbar();
}

void Q4_Q5()
{
    printf("Exercises 4 & 5:\n\n");

    char words[SIZE];

    //scanf() skips whitespace characters
    printf("Enter a string of characters including spaces> ");
    scanf(" %s", words); //for exercise 5, enter more characters than the string can hold
    printf("Here is what was scanned with scanf: %s\n\n", words);

    //gets() does not skip whitespace characters
    //printf("Enter a string of characters including spaces> ");
    //gets(words); //for exercise 5, enter more characters than the string can hold
    //printf("Here is what was scanned with gets: %s\n\n",words);

    starbar();
}

void Q6_Q7_Q8()
{
    printf("Exercises 6, 7, and 8:\n\n");
    char flower[6];
    //flower = "peony"; //do not do this!!

    //assign "peony" to flower using strcpy()
    strcpy(flower,"peony");   //strcpy() is the string equivalent of the assignment operator

    //assign "peony" to flower using strncpy()
    strncpy(flower,"peony", 5);
    flower[5] = '\0';   //manually add null character

    //other option:
    //strncpy(flower,"peony", 6);   //will also copy null character into receiving string

    printf("%s\n", flower);

    //extra practice

    starbar();
}

void Q9()
{
    printf("Exercises 9:\n\n");

    char goldwyn[40] = "art of it all ";
    char samuel[40] = "I read p";
    char quote[] = "the way through.";

    strcat(goldwyn, quote);
    strncat(samuel, goldwyn, 9);

    printf("%s\n%s\n", goldwyn, samuel);
    printf("%4d%4d%4d\n", strlen(quote),strlen(goldwyn), strlen(samuel));

    //extra practice
    strcpy(&samuel[7],&goldwyn[7]);
    printf("%s\n", samuel);
    strncpy(&samuel[7],goldwyn,4);
    strcpy(&samuel[10],"\0");
    printf("%s\n", samuel);

    starbar();
}

void somefun()
{
    printf("Twinsies!!\n");
}

void Q10()
{
    printf("Exercise 11:\n\n");

    char a[] = "cat",
    b[] = "cat";

    //if statement that would call function somefun()
    //if the string values of character arrays a and b are equal
    if(strcmp(a, b) == 0)
        somefun();

    starbar();
}

void starbar()
{
    int i;
    printf("\n");
    for (i = 0;i < 55; i++)
        printf("*");
    printf("\n");
}
