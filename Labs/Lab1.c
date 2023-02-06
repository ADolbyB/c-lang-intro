/*
Joel Brigida
Lab 1
Jan 30th, 2020
*/

#include <stdio.h>

int main()

{

        /** Calculate and display the difference of two values */

        /** This program subtracts an int value "x" (7) from a double value "y" (9.5)
            and prints the operation with the result */


    int x;              /* first input value */
    double y;           /* second input value */
    double sum;         /* sum of inputs */

    x = 9;              /* initializes x as integer 9 */
    y = 7.5;            /* initializes y as real number 7.5 */
    sum = x - y;        /* initializes "sum" as the difference of x and y */

    printf("%d - %f = %f\n", x, y, sum); /* This line prints the operation and output to the screen */

            /** This 2nd program takes the average of 3 numbers, then prints the operation and result */

    int a, b, c;                    /* declares 3 variables "a", "b", "c" as integers */
    a = 5, b = 10, c = 37;          /* initializes int variables "a" as 5, "b" as 10, and "c" as 37 */

    double n;                       /* declares variable "n" as type double real number */
    n = (a + (double)b + c) / 3;    /* initializes variable "n", typecasts "b" as a variable type double, then calculates
                                    "n" as the average of a, b, and c as a real number rather than an integer */

    /* This line prints the values of a, b, and c and shows the result as a real number */
    printf("\nThe average of the three values: %d, %d, and %d is %f\n", a, b, c, n);

return 0;

}
