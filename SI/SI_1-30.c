/* 
Joel Brigida
SI Session Wk 3
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int color, lime, straw, red, orange;                /** declaring named variables as integers */
    double white, green, blue, purple, crayon, pink;    /** declaring named variables as real decimal numbers */

    color = 2;                  /** initializing named variables as numbers */
    crayon = -1.3;
    straw = 1;
    red = 3;
    purple = 0.3E1;

    white = (color * 2.5) / purple;
    printf("%f\n", white);        /** %f is used because "color" and "2.5" are variable type double */

    green = color / purple;
    printf("\n%f\n", green);      /** %f is used because "purple" is variable type double */

    orange = color / red;
    printf("\n%d\n", orange);     /** %d is used since "color" and "red" are variable type int */

    pink = (double)(color) / red;
    printf("\n%f\n", pink);

    blue = (color + straw) / (crayon + 0.3);  /** operation results in quotient of -3.0000 */
    printf("\n%d", (int)blue);                /** %d is used with typecast int blue
                                                  so -3 is displayed instead of -3.000 */
    return 0;
}