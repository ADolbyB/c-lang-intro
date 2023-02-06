/*
Joel Brigida
COP 2220
SI Worksheet 8
*/

#include <stdio.h>


int main()
{
    int a = 25, b = -2, c;
    double x = 12.7, y = 5.0e-1, z;
/*
    c = a % b * 5;
    printf("%d\n", c);

    c = 10 + c / y * b;
    printf("%d\n", c);

    c = (int) x + a / b - 6;
    printf("%d\n", c);

    z = 13 + b * c / a;
    printf("%.2f\n", z);

    z = a * y * 2 - b;
    printf("%.2f\n", z);

    z = z + 3 / y;
    printf("%.2f\n", z);
*/
    /** Rewrite equations with parenthesis to change values */

    c = (10 + (c / y)) * b;         // Make c = -40 (was -10)
    printf("%d\n", c);

    c = (int)(x + a) / (b - 6);    // Make c = -4 (was -6)
    printf("%d\n", c);

    z = a * (y * (2 - b));          // Make z = 50.00 (was 27.0)
    printf("%.2f\n", z);

    return 0;
}