/*
COP2220
Lecture 2
Author: Joel Brigida
The purpose is to practice the printf command, placeholders, and escape sequences
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\a\tGood Afternoon Students!\n");
    printf("The number of students in this class is %d, Today 2%% of the class was absent.\nThe average for quiz 1 is %f\n",60,69.5);

    int num_students = 60;      /* Number of students who took a test */
    int total_score = 69.5 * 60;        /* Total of all students test scores */
    double average1,average2;

    average1 = (double)total_score / (double)num_students;
    printf("The first average considering type-casting is %f\n",average1);

    average2 = total_score /num_students;
    printf("The second average is %f\n\n",average2);

    return 0;
}