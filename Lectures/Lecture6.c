/**
Joel Brigida
Lecture 6
2-11-2020
Purpose is to produce user-defined functions with no input and no output
*/

#include <stdio.h>

void butler (void);         // Function prototype
void driver (void);         // 2nd Function prototype

int main()
{
    printf("It's the afternoon, where is my butler?\n");

    butler();               // This is the function call -- like a hand wave.

    printf("I had a bad day, please bring me a beer.\n");

    printf("I need my butler again!\n");
    butler();
    printf("Bring me my laptop, I have an assignment to finish today.\n");

    printf("I want to go home, where is the driver?\n");
    driver();
    printf("It's been a long day, please take me home.\n");

    return 0;
}

void butler()
{
    printf("Hello Sir, how may I help you??\n");
}

void driver()
{
    printf("Where can i drive you to?\n");
}