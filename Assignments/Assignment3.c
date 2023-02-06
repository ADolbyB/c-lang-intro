/**
Joel Brigida
Dr. Sareh Taebi
COP2220-007
03-06-2020
Assignment #3
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

void new_line(void);                            // Function that prints a new line
void Q1(void);                                  // Function which calculates the factorial of any input "n"
double n_func(int x);                           // Mathematical calculation of n-factorial for Q1
void Q2a(void);                                 // switch type function that converts watts to lumens
void Q2b(void);                                 // nested if type function that converts watts to lumens
void Q3(void);                                  // BMI calcualtor with comments
double bmi_calc(double h, double w);            // Mathematical calculation of BMI for Q3
void Q4(void);                                  // Cartesian coordinate quadrant identifier
void coordinates(double x, double y);           // Mathematical calculation for Q4 function
void Q5a(int x, int y);                         // Q5a produces specified output per template.
void Q5b(int x, int y);                         // Q5b produces specified output per template.
void Q5c(int x, int y);                         // Q5c produces specified output per template.

int main()
{

    Q1();
    Q2a();
    Q2b();
    Q3();
    Q4();
    Q5a(5, 8);
    Q5b(5, 8);
    Q5c(5, 7);

    return 0;
}

void Q1(void)
{

    int x; // User input variable for factorial calculation.
    double output;

    printf("=> N FACTORIAL APPROXIMATOR <="), new_line();
    printf("Please enter an integer value for \'n\': ");
    scanf("%d", &x);

    output = n_func(x); // Function call to n_func to calculate factorial of user defined integer

    new_line(), printf("The result of integer %d factorial is approximately %f", x, output);


}

double n_func(int n)
{

    double result = (pow(n,n)) * (exp(-n)) * (sqrt(((n * 2.0) + (1.0 / 3.0)) * PI)); // Approximate calculation of 'n!'


    return (result);

}

void new_line(void)
{

    printf("\n");

}

void Q2a(void)
{

    int wattage, lumens;

    new_line(), new_line(), printf("=> WATTAGE TO LUMENS EQUIVALENT <=");
    new_line(), printf("Please enter the wattage value: ");
    scanf("%d", &wattage);
    new_line();

    switch(wattage)
    {
    case 15:
        lumens = 125;
        printf("%d Watts = %d Lumens", wattage, lumens);
        break;
    case 25:
        lumens = 215;
        printf("%d Watts = %d Lumens", wattage, lumens);
        break;
    case 40:
        lumens = 500;
        printf("%d Watts = %d Lumens", wattage, lumens);
        break;
    case 60:
        lumens = 880;
        printf("%d Watts = %d Lumens", wattage, lumens);
        break;
    case 75:
        lumens = 1000;
        printf("%d Watts = %d Lumens", wattage, lumens);
        break;
    case 100:
        lumens = 1675;
        printf("%d Watts = %d Lumens", wattage, lumens);
        break;
    default:
        lumens = -1;
        printf("ERROR: INVALID INPUT. %d", lumens);
        new_line();

    }

}

void Q2b(void)

{

    int wattage_2, lumens_2;

    new_line(), new_line(), printf("Please enter the wattage value: ");
    scanf("%d", &wattage_2);
    new_line();

    if (wattage_2 == 15)
    {
        lumens_2 = 125;
        printf("%d Watts = %d Lumens", wattage_2, lumens_2);
    }
    else if (wattage_2 == 25)
    {
        lumens_2 = 215;
        printf("%d Watts = %d lumens", wattage_2, lumens_2);
    }
    else if (wattage_2 == 40)
    {
        lumens_2 = 500;
        printf("%d Watts = %d Lumens", wattage_2, lumens_2);
    }
    else if (wattage_2 == 60)
    {
        lumens_2 = 880;
        printf("%d Watts = %d Lumens", wattage_2, lumens_2);
    }
    else if (wattage_2 == 75)
    {
        lumens_2 = 1000;
        printf("%d Watts = %d Lumens", wattage_2, lumens_2);
    }
    else if (wattage_2 == 100)
    {
        lumens_2 = 1675;
        printf("%d Watts = %d Lumens", wattage_2, lumens_2);
    }
    else
    {
        lumens_2 = -1;
        printf("ERROR: INVALID ENTRY. %d", lumens_2);
    }

}

void Q3(void)
{

    double height, weight, bmi;

    new_line(), new_line(), printf("=> BMI CALCULATOR <=");
    new_line(), printf("Please enter your height in inches: ");
    scanf("%lf", &height);
    new_line(), printf("Please enter your weight in pounds: ");
    scanf("%lf", &weight);

    bmi = bmi_calc(height, weight);

    new_line(), printf("Your BMI Body Mass Index is: %.1f", bmi), new_line();

    if (bmi < 18.5)
        printf("You are underweight.");
    else if (bmi < 25 && bmi >= 18.5)
        printf("You are normal.");
    else if (bmi < 30 && bmi >= 25)
        printf("You are overweight.");
    else if (bmi >= 30)
        printf("You are obese");

}

double bmi_calc(double h, double w)
{

    double index = ((703 * w) / (h * h));

    return (index);

}

void Q4(void)
{
    double x_value, y_value;

    new_line(), new_line(), printf("=> CARTESIAN COORDINATE MAPPER <=");
    new_line(), printf("Please enter a double for X value: ");
    scanf("%lf", &x_value);
    new_line(), printf("Please enter a double for Y value: ");
    scanf("%lf", &y_value);
    new_line(), printf("The point (X, Y) you entered is (%.1f, %.1f)", x_value, y_value);
    new_line(), new_line();

    coordinates(x_value, y_value);

}

void coordinates(double x, double y)
{

    if (x == 0 && y == 0)
        printf("The point (%.1f, %.1f) is on the origin.",x ,y);
    else if (x == 0 && y < 0)
        printf("The point (%.1f, %.1f) is on the negative Y-axis.",x ,y);
    else if (x == 0 && y > 0)
        printf("The point (%.1f, %.1f) is on the positive Y-axis.",x ,y);
    else if (x > 0 && y == 0)
        printf("The point (%.1f, %.1f) is on the positive X-Axis.",x ,y);
    else if (x < 0 && y == 0)
        printf("The point (%.1f, %.1f) is on the negative X-axis.",x ,y);
    else if (y > 0 && x > 0)
        printf("The point (%.1f, %.1f) is in Quadrant I.",x ,y);
    else if (y > 0 && x < 0)
        printf("The point (%.1f, %.1f) is in Quadrant II.",x ,y);
    else if (y < 0 && x < 0)
        printf("The point (%.1f, %.1f) is in Quadrant III.",x ,y);
    else if (y < 0 && x > 0)
        printf("The point (%.1f, %.1f) is in Quadrant IV.",x ,y);

    new_line();


}

void Q5a(int x, int y)
{

    /// x = 5 and y = 8

    new_line();

    if ( y == 8 )
    if ( x == 5 )
    printf( "@@@@@\n" );
    else
    printf( "#####\n" );
    printf( "$$$$$\n" );
    printf( "&&&&&\n" );

}

void Q5b(int x, int y)
{

    /// x = 5 and y = 8

    new_line(), new_line();

    if ( y == 8 )
    if ( x == 5 )
    printf( "@@@@@\n" );
    else{
    printf( "#####\n" );
    printf( "$$$$$\n" );}
    printf( "&&&&&\n" );



}

void Q5c(int x, int y)

{

    ///x = 5 and y = 7

    new_line(), new_line();

    if ( y == 8 )
    if ( x == 5 )
    printf( "@@@@@\n" );
    else{}
    printf( "#####\n" );
    printf( "$$$$$\n" );
    printf( "&&&&&\n" );



}
