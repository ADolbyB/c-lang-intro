/**
Joel Brigida
Lab 3
Dr. Sareh Taebi
COP2220-007
Feb 18, 2020
*/

#include <stdio.h>
#include <stdlib.h>
#define LITERS_TO_GAL 3.785    // Conversion constant: amount of liters in 1 gallon
#define MILE_TO_KM 1.609       // Conversion constant: amount of kilometers in one mile

void Q1(void);                 // Prints a custom display about a beautiful car, which no one can deny
void beautiful_car(void);
void no_one_deny(void);
void tab_func(void);           // function which prints an escape sequence tab
void new_line(void);           // function which prints a new line
void Q2(void);                 // function which calculates fuel consumptioin in MPG and L/100km
double dodge_metric_consum_conversion(int miles, double gallons); // calculates Joel's 2001 Dodge Ram fuel consumption in metric L/100km
void Q3(void);                 // Void function that calls the dodge_metric_consumption_conversion function


int main()
{

    Q1();                   // Prints a custom display about a beautiful car, which no one can deny
    Q2();                   // function which calculates fuel consumptioin in MPG and L/100km
    Q3();                   // function that displays and calculates the metric fuel consumption equivalent of my 2001 Dodge Ram

    return 0;
}

void Q1(void)
{
    beautiful_car(), new_line(), new_line();
    tab_func(), beautiful_car(), new_line(), new_line();
    tab_func(), tab_func(), beautiful_car(), new_line(), new_line();
    tab_func(), tab_func(), tab_func(), tab_func(), no_one_deny(), new_line();
}

void beautiful_car(void)
{
    printf("For that\'s a beautiful car!");
}

void no_one_deny(void)
{
    printf("Which nobody can deny.");
}

void tab_func(void)                     // Void function to print a tab escape sequence
{
    printf("\t");
}

void new_line(void)                     // Void function to print a new line escape sequence
{
    printf("\n");
}

void Q2(void)
{
    double gallons, mpg, km, liters, lp100km;
    int miles;
    new_line(), tab_func(), printf("=> US AND METRIC FUEL MILEAGE CALCULATOR <=");

    new_line(), printf("Please enter an integer value for miles travelled: ");
    scanf("%d", &miles);
    new_line(), printf("Please enter a decimal value for gallons of gasoline consumed: ");
    scanf("%lf", &gallons);

    mpg = (double)miles / gallons;                  // MPG consumption equation
    km = miles * MILE_TO_KM;                        // miles to kilometers conversion equation
    liters = gallons * LITERS_TO_GAL;               // US gallons to metric liters conversion equation
    lp100km = (liters / km) * 100;                  // Metric consumption L/100km equation

    new_line(), printf("The calculated US fuel consumption value is: %.1f MPG", mpg);

    new_line(), new_line(), printf("The calculated Metric fuel consumption value is %.2f L/100km", lp100km), new_line();
}

void Q3(void)
{
    double ram_consum;

    new_line(), tab_func(), printf("=> Joel's 2001 Dodge Ram Average Fuel Consumption <=");

    ram_consum = dodge_metric_consum_conversion(220, 10.0);

    new_line(), new_line(), printf("The 2001 Dodge Ram averages the metric equivalent consumption of: %.2f L/100km\nbased on %d miles and %.1f gallons of fuel", ram_consum, 220, 10.0);
}

double dodge_metric_consum_conversion(int miles, double gallons)
{
    double liters, km, consum;

    liters = gallons * LITERS_TO_GAL;                  // US gallons to metric liters conversion equation
    km = (double)miles * MILE_TO_KM;                   // miles to kilometers conversion equation
    consum = (liters / km) * 100;                      // Metric consumption L/100km equation

    return(consum);
}
