/*
Joel Brigida
SI - 2/4/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    /**This program prompts user for (1) base measurement, (2) height measurement
    of a right triangle, then (3) calculates and displays the length of the triangle's hypotenuse
    **/

    double a, b, c;     /* a is height, b is base, c is hypotenuse */

    printf("Please enter the triangle's Base length: ",b);      //Prompt user for base lenth
    scanf("%lf",&b);

    printf("\nPlease enter the triangle's Height: ",a);         //Prompt user for height length
    scanf("%lf",&a);

    c = sqrt(pow(a,2) + pow(b,2));

    printf("\nThe length of the triangle's hypotenuse is: %.2f",c);

    return 0;
}