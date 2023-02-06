/*
COP2220
Lecture 5 (in class)
Author: Joel Brigida
The purpose is to practice the printf command, placeholders, and escape sequences
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char first_initial;
    int age;
    double grade;       //This refers to the grade out of 100

    printf("Good afternoon, user. Please enter the 1st inital of your first name, your age, and your grade in consecutive order: ");
    scanf(" %c%d%lf", &first_initial, &age, &grade);
    printf("Ok, Your first initial is %c,\nYou are %d years old, \nand your average grade of %f is pretty good!!", first_initial, age, grade);       //This is to test scanf correctness

    /*
    printf("\nNow, enter your age: ");
    scanf("%d", &age);
    printf("Ok. You are %d years old", age);

    printf("\nSo, tell me what your grade average is: ");
    scanf("%lf", &grade);
    printf("\nWell, your average grade of %f is pretty good!!",grade);
    */

    return 0;
}