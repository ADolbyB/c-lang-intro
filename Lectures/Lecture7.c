/**
Joel Brigida
Lecture 7 - 2/13/2020
To practice user defined functions with input and output arguments
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159

double circle_area (double R);          //Function prototyping
double circle_circum (double R);
void Q1 (void);
void Q2 (void);
double scale (int N, double X);

int main()
{

    Q1 ();          // Calculate and print the area and circumference of a circle.
    Q2 ();          // Calculates the equation X*10^N and displays the results.

    return 0;
}

void Q1(void)
{

    printf("\t=> CIRCLE CALCULATOR <=");
    //double radius = 1.0;                      // Declaring a test value for radius to check function
    //double area = circle_area(radius);        // Used in conjunction with test value above (no user input)
    double radius, circum, area;

    printf("\n\nPlease enter a value for the circle radius: ");
    scanf("%lf", &radius);

    area = circle_area(radius);
    circum = circle_circum(radius);

    printf("\nThe area of a circle with radius %f is %f", radius, area);
    printf("\n\nThe circumference of a circle with radius %f is %f", radius, circum);
    //printf("\nThe circumference of the circle with radius %f is %f\n", 1.0, circle_circum(1.0)); //Used in conjucntion with tests above also (no user input)
}

double circle_area (double R)           // Function prototyping
{
    double area;                        // Local variable - temporary only while this user defined function is running
    area = PI * pow(R,2.0);
    return (area);                      // Parenthesis around "area" are OPTIONAL

}

double circle_circum (double R)         // Function Definition
{
    double circum;
    circum = 2 * PI * R;
    return (circum);

}

void Q2(void)               //Void DOES NOT have a return function!!!
{
    printf("\n\n\t=> X*10^N SCALE FACTOR CALCULATOR <=");
    int N;
    double result, X;

    printf("\n\nEnter an integer \'N\' for the power of 10 scale factor calcuations: ");
    scanf("%d", &N);

    printf("\nNow enter a double value \'X\' for the power of 10 multiplier: ");
    scanf("%lf", &X);

    result = scale(N,X);
    printf("The output of function scale is %.2f\nIn scientific notation, the result is %.1e", result, result);

}

double scale (int N, double X)
{
    double power_calc = pow(10.0, N);           // Pow function has roundoff error when numbers are very large or very small
    double result = X * power_calc;
    return result;

}