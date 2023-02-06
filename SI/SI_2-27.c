/**
Joel Brigida
SI Session 13
2/27/20
*/

#include <stdio.h>
#include <stdlib.h>
#define BONUS 5

double getAverage();
void finalGrade(double average, int bonus);
void finalGrade2(double average, int bonus);

int main()
{

    double avg = getAverage();
    finalGrade(avg, BONUS);
    //finalGrade2(avg, BONUS);

    return 0;
}

double getAverage()
{
    double grade_average;

    printf("Enter your grade percentage: ");
    scanf("%lf", &grade_average);

    return (grade_average);
}

void finalGrade(double average, int bonus)
{
    if (average >= 70)
    {
        average = average + BONUS;
        printf("You have passed with a final average of %f", average);
    }
    else
    {
        printf("Sorry, you have failed, your final average is %f", average);
    }
}

void finalGrade2(double average, int bonus)
{
    average >= 70 ?
        average = average + bonus, printf("You have passed with a final average of %f", average) :
            printf("Sorry, you have failed, your final average is %f", average);

}