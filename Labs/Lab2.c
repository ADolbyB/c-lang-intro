/**
Joel Brigida
Lab #2
COP 2220-007
Dr. Sareh Taebi
2/6/2020
*/

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
#define RATE_PER_MILE 0.35

int main()
{
    /* This Program takes user input, computes the Area and Circumference of a Circle and the Volume of a sphere */

    char circle;
    double radius;

    printf("Please enter a letter to name the circle: ");
    scanf("\n %c", &circle);
    printf("\nPlease enter a decimal value for the circle's radius: ");
    scanf("\n%lf", &radius);
    printf("\nYou have entered \'%c\' for circle name and \'%.2f\' for circle radius.\n", circle,radius);

    double area_circle = (PI * radius * radius);
    double circumference = (2 * PI * radius);
    double volume_sphere = (((double)(4) / 3) * PI * (radius * radius * radius));

    printf("\nThe computed values for circle \'%c\' and sphere encompassing circle \'%c'\ are:\n",circle,circle);

    printf("\n%.2f: Area of Circle \'%c\'",area_circle,circle);

    printf("\n%.2f: Circumference of Circle \'%c\'", circumference,circle);

    printf("\n%.2f: Volume of Sphere encompassing Circle \'%c\'",volume_sphere,circle);

        /* This 2nd program takes user input of mileage and calculates reimbursement based on
        a predetermined value per mile */

    double miles_start, miles_end, total_miles, reimbursement;

    printf("\n\nMILEAGE REIMBURSEMENT CALCULATOR\n");
    printf("\nEnter beginning odometer reading=> ");
    scanf("\n%lf", &miles_start);
    printf("\nEnter ending odometer reading=> ");
    scanf("\n%lf",&miles_end);

    total_miles = (miles_end - miles_start);
    reimbursement = (RATE_PER_MILE * total_miles);

    printf("\nYou have traveled a total of %.1f miles",total_miles);
    printf("\nBased on the total distance %.1f miles, \nyour reimbursement at $%.2f per mile = $%.2f",total_miles, RATE_PER_MILE, reimbursement);

    return 0;
}