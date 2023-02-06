/**
Joel Brigida - Assignment 2
Dr. Sareh Taebi
COP 2220-007
02/20/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define H20_MOLECULE_MASS 3.0e-23             // Total mass of 1 molecule of water
#define QUARTS_TO_GRAMS 950                   // Conversion factor - 1 quart contains ~950 grams

void new_line(void);                          // Function Prototypes
void tab_func(void);
void alert(void);
void smile(void);
void Q1(void);
void valentine(void);
void Q2(void);
void one_three(void);
void two(void);
void Q3(void);
double distance(int x1, int x2, int y1, int y2, int z1, int z2);
void Q4(void);
double qt_to_grams(double quarts);
double grams_to_molecules (double grams);
void Q5(void);

int main()
{

    Q1(); // Prints "Smile!" in a specifically defined pattern
    Q2(); // Prints a custom Valentines Day message
    Q3(); // Prints a custom message "Starting now: one, two, three, done!" on separate lines
    Q4(); // Calculates the distance between 2 points in free space (X1, Y1, Z1) and (X2, Y2, Z2)
    Q5(); // Calculates the number of water molecules from a user entered volume in quarts

    return 0;

}

void new_line(void)
{

    printf("\n");

}

void tab_func(void)
{

    printf("\t");

}

void alert(void)
{

    printf("\a");

}

void Q1(void)
{

    smile(), smile(), smile(), new_line();
    smile(), smile(), new_line(), smile();

}

void smile(void)
{

    printf("Smile!");

}

void Q2(void)
{

    valentine();

}

void valentine(void)
{

    alert(), new_line(), new_line();
    printf("So excited that she shouted, \"What a wonderful day full of sweets, flowers, and love! Wishing you all the best this Valentine\'s Day\"");
    new_line();

}

void Q3(void)
{

    new_line(), printf("starting now: "), new_line();
    one_three();
    printf("done!"), new_line();

}

void one_three(void)
{

    printf("one"), new_line();
    two();
    printf("three"), new_line();

}

void two(void)
{

    printf("two"), new_line();

}

void Q4(void)
{

    int x_coord1, x_coord2, y_coord1, y_coord2, z_coord1, z_coord2;
    double dist_calc;

    tab_func(), printf("=> FREE SPACE DISTANCE CALCULATOR <=");

    new_line(), new_line(), printf("Please enter 3 integers for first point X1, Y1, Z1: ");
    scanf(" %d %d %d", &x_coord1, &y_coord1, &z_coord1);

    new_line(), printf("Please enter 3 integers for second point X2, Y2, Z2: ");
    scanf(" %d %d %d", &x_coord2, &y_coord2, &z_coord2);

    dist_calc = distance(x_coord1, x_coord2, y_coord1, y_coord2, z_coord1, z_coord2);

    new_line(), printf("The distance in free space between 1st point (%d, %d, %d), and 2nd point (%d, %d, %d) is: %.2f", x_coord1, y_coord1, z_coord1, x_coord2, y_coord2, z_coord2, dist_calc);
    new_line();

}

double distance(int x1, int x2,int y1, int y2, int z1, int z2)
{

    double dist;

    dist = sqrt((pow(((double)x1-x2),2))+(pow(((double)y1-y2),2))+(pow(((double)z1-z2),2)));    // Free Space point-distance formula

    return (dist);

}

void Q5(void)
{

    double quarts, grams, molecules;

    tab_func(), printf("=> WATER MOLECULE CALCULATOR <=");

    new_line(), new_line(), printf("Please enter the amount of water in quarts as a double: ");
    scanf("%lf", &quarts);

    grams = qt_to_grams(quarts);

    molecules = grams_to_molecules(grams);

    new_line(), printf("%.2f quarts converts to %.2f grams", quarts, grams);
    new_line(), new_line(), printf("%.2f grams of H2O equates to %.2e molecules", grams, molecules);
    new_line();

}

double qt_to_grams(double quarts)
{

    double gms;

    gms = quarts * QUARTS_TO_GRAMS;                 // Converts amount entered in quarts to equivalent amount in grams

    return(gms);

}

double grams_to_molecules(double grams)
{

    double molecules;

    molecules = grams / H20_MOLECULE_MASS;      // Equation to convert mass in grams to amount of molecules

    return(molecules);

}
