/**
Joel Brigida
Assignment #1
COP 2220-007
Dr. Sareh Taebi
February 9, 2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define GRASS_CUT_RATE 2.0

int main()
{

                /* 1st Program: print out my name in 4 separate lines */

    printf("Joel Brigida");
    printf("\nJoel\nBrigida");
    printf("\nJoel ");
    printf("Brigida");

                /* 2nd Program: create integer named "toes." Calculate twice toes and toes squared */

    int toes, twice_toes, toes_squared;

    toes = 10;
    twice_toes = toes * 2;
    toes_squared = pow(toes,2);
    printf("\n\nInteger \'toes\' has a value of %d\nTwice \'toes\' = %d\n\'toes\' squared = %d",toes,twice_toes,toes_squared);

                /* 3rd Program: Convert Fahrenheit degrees to celsius */

    printf("\n\n=> FAHRENHEIT TO CELSIUS CONVERSION <=\n");

    int fahrenheit; /* Temperature in degrees fahrenheit */

    printf("\nPlease enter the temperature in degrees F: ");
    scanf(" %d",&fahrenheit);

    double celsius; /* Temperature in degrees Celsius */

    celsius = ((double)5 / 9) * ((double)fahrenheit - 32); /* Conversion formula: degF to degC */
    printf("\n%d degrees F is equivalent to %.2lf degrees C", fahrenheit, celsius);

                /* 4th Program: Calculate grass area of a lawn and time required to cut the lawn area */

    printf("\n\n=> YARD AREA AND LANDSCAPE CALCULATOR <=\n");

    double yard_length, yard_width, yard_area, house_length, house_width, house_area, grass_area, mow_time_sec;

    printf("\nPlease enter the total length of your yard in feet: ");
    scanf("%lf", &yard_length);
    printf("\nPlease enter the total width of your yard in feet: ");
    scanf("%lf", &yard_width);
    printf("\nPlease enter the length of the house in your yard in feet: ");
    scanf("%lf", &house_length);
    printf("\nPlease enter the width of the house in your yard in feet: ");
    scanf("%lf", &house_width);

    house_area = house_length * house_width; // Calculates the total area of the house sitting in a yard.
    yard_area = yard_length * yard_width; // Calculates the total area of the yard with the house on it.
    grass_area = yard_area - house_area; // Calculates the total grass area that needs to be mowed.
    mow_time_sec = grass_area / GRASS_CUT_RATE;  // Calculates the time in seconds it will take to mow the specified grass area.


    printf("\nThe total grass area that needs mowing is: %.2f square feet.", grass_area);
    printf("\n\nThe total time to mow %.2f sq-ft of grass is %.0f seconds\nbased on a cut rate of %.1f sq-ft per second.", grass_area,mow_time_sec,GRASS_CUT_RATE);

                /* 5th Program: Calculate the rising temperature of a freezer after a power outage */

    printf("\n\n=> FREEZER TEMPERATURE AFTER A POWER OUTAGE <=");

    int hours, minutes;         // Hours and minutes input since power failure
    double total_hours;         // Conversion from hours and minutes into hours
    double final_temp;          // Temperature calculation in degC after elapsed time of power failure

    printf("\n\nPlease enter the hours and minutes elapsed since the power failure: ");
    scanf(" %d %d", &hours, &minutes);

    total_hours = (double)hours + ((double)minutes / 60);       // Converts hours and minutes into a decimal number of hours

    final_temp = (((double)4 * pow(total_hours,2)) / (total_hours + 2)) - 20;    // Calculates freezer temp based on time elapsed

    printf("\nThe total time that has passed since power failure is %.2f hours.", total_hours);
    printf("\n\nThe temperature of the freezer is now %.2f degrees C.\n\n", final_temp);

    return 0;
}
