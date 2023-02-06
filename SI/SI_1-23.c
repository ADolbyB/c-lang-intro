/* 
Joel Brigida
SI Session Wk 2 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num_cred = 14;             // Number of credits enrolled this semester
    double gpa = 4.0;              // GPA Score @ FAU
    char name_initial = 'B';       // The First initial of your last name

    int num_credits;               // Alternate way of declaring variable and initializing separately
    num_credits = 14;              // Need to name variable differently. Can't initialize same variable twice

    double gpa_1;
    gpa_1 = 4.0;

    char name_initial_1;
    name_initial_1 = 'B';

    int x = 10;
    double a = 6.0;
    double b = 3.1415;
    double c = 2.5;

    x = x + 10;         //  "Increase x by 10" -- x=20
    x = x + 1;          //  "Increase x by 1"  -- x=21  because x value was overwritten as 20 from previous line
    a = 2 * (a + b);    //  "Assign twice the sum of a and b to a" -- a=18.183
    c = a +(2 * c);     //  "Assign a plus twice c to c"  -- c=23.283

    // New x value: 21
    // New a value: 18.283
    // b did not change: 3.1415
    // New c value: 23.283

    printf("SI COP2220\n");

    return 0;
}
