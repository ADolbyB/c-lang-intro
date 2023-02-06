/*
COP2220
Lecture 2
Author: Joel Brigida
The purpose is to practice variable declarations and assignment operations
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_students = 60; //how many students are in the class
    int num_classes = 4; // how many classes each student takes
    char grade;
    grade = 'A';

    printf("The class passed the course with an %c\n",grade);

    printf("COP2220 has %d students\n", num_students);

    printf("Each student has on average %d classes.\n", num_classes);

    double x, new_x;
    x = 3.5;

    new_x = x;
        printf("x is %f and new_x is %f\n", x, new_x);

    new_x = new_x + x;
        printf("x is %f and new_x is %f\n", x, new_x);

    new_x=-x;
        printf("x is %f and new_x is %f\n", x, new_x);

    return 0;
}