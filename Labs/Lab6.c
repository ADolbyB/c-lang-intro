/**
Joel Brigida
Dr. Sareh Taebi
COP2220-007 Lab #6
3/26/2020
*/

#include <stdio.h>
#include <stdlib.h>

void tab(void);     // prints a \t esc seq
void newline(void); // prints a \n esc seq
void Q1a(void);
void Q1b(void);
void Q1c(void);
void Q1d(void);
void Q1e(void);
void Q1f(void);
void Q2(void);
void Q3(void);

int main()
{

    Q1a();
    Q1b();
    Q1c();
    Q1d();
    Q1e();
    Q1f();
    Q2();
    Q3();

    return 0;
}

void tab(void)
{

    printf("\t");

}

void newline(void)
{

    printf("\n");

}

void Q1a(void)
{
    tab(), printf("=> Question #1a <="), newline(), newline();

    int x = 1;                          // Need to declare x as type int.
    while ( x <= 10 )                   // Need to delete semi-colon after while argument.
        {                               // Need to add one missing curly bracket { at the beginning of the while loop.
            printf("%4d", x);           // Need to add an output statement such as: printf("%4d", x); if we want something useful (output).
            x++;                        // X is incremented + 1. Prefix/Postfix variable type irrelevant in this instance.
        }

    newline(), newline();
}

void Q1b(void)
{
    tab(), printf("=> Question #1b <="), newline(), newline();

    double y;                                   // Need to initialize y as a double because y is incrementing in increments of 0.1

    for ( y = 0.1; y <= 1.0; y += 0.1 )         // Need to change "y != 1.0" (condition is always true) to "y <= 1.0" or it results in infinite loop.
        printf( "%f\n", y );                    // Prints value of y as a double and a newline esc sequence.

    newline(), newline();
}

void Q1c(void)
{
    tab(), printf("=> Question #1c <="), newline(), newline();

    int n;                                           // Variable n needs to be declared as type int.
    printf("Please enter a single digit: ");         // We need an input for variable n.
    scanf("%d", &n);                                 // User input for variable n.

    switch ( n )
        {                                            // Proper indenting for { left bracket
            case 1:
                printf( "The number is 1\n" );
                break;                               // Need to add a break command here (was missing).
            case 2:
                printf( "The number is 2\n" );
                break;
            default:
                printf( "The number is not 1 or 2\n" ); // Removed break command after the default statement (unnecessary).
        }

    newline(), newline();
}

void Q1d(void)
{
    tab(); printf("=> Question #1d <="), newline(), newline();

    int n = 1;                                       // Need to declare n as variable type int.

    while ( n <= 10 )                                // Need to change (n < 10) to (n <= 10) so that the loop runs 10 times
        printf( "%d ", n++ );

    newline(), newline();
}

void Q1e(void)
{
    tab(); printf("=> Question #1e <="), newline(), newline();

    int z, sum;                                      // Need to declare z and sum as type int

    sum = 0;                                         // Need to initialize the sum to 0
    z = 100;                                         // Initialize z to 100 because we want it to count down to zero.

    while ( z > 0 )                                  // Change to ( z > 0 ) since we don't want to include zero
        sum += z--;                                  // Need to postfix decrement z to count it down to zero after the sum is calculated.

    printf("Total of all integers added from 100 down to 1 = %d", sum);      // Need an output statement to display & verify output.

    newline(), newline();
}

void Q1f(void)
{
    tab(); printf("=> Question #1f <="), newline(), newline();

    int mult4;                                       // Need to declare mult4 as type int.

    for (mult4 = 0; mult4 <= 100; mult4 += 4)        // Need variable initialization, test condition, and update/increment statements together in parentheses next as "for" argument.
        printf("%d\n", mult4);                       // (cont from above) change test condition to "mult4 <= 100" so that 100 is included in output, remove semi-colon after "mult4 +=4" because its a syntax error.

    newline(), newline();

}

void Q2(void)
{
    tab(), printf("=> Question #2 <="), newline(), newline();

    int m, n, p;
    int j = 5;           // j = birth month
    int i = 10;          // i = birth day

    printf("Start values: j = %d, i = %d", j, i), newline();            // Displays variables i and j in their initial condition

    n = ++i * --j;       // i is incremented to 4 (unary prefix), (j) is decremented to 1 (unary prefix), then (4 * 1) is calculated, output (4) is assigned to (n).

    printf("Step 1 values: n = %d, i = %d, j = %d", n, i, j), newline();        // Displays n, i, and j after the 1st operation is performed.

    m = i + j--;         // i = 4 (no change), 4 is added to (j), So 4 + 1 = 5, (j) is then decremented to 0 (unary postfix), and 5 is then assigned to variable m.

    printf("Step 2 values: m = %d, i = %d. j = %d", m, i, j), newline();        // Displays m, i, and j after the 2nd operation

    p = i + j;           // i = 4 (no change), and j = 0 (no change). So 4 + 0 = 4, and 4 is assigned to p.

    printf("Step 3 values: p = %d, i = %d, j = %d", p, i, j), newline(), newline();     // Displays p, i, and j after the 3rd operation.

    printf("Final Values: n = %d, m = %d, p = %d, i = %d, j = %d", n, m, p, i, j), newline(), newline(); // Displays all variable values after all calculations have been performed.

    newline(), newline();

}

void Q3(void)
{
    int l, u;

    tab(), printf("=> Integer, Square and Cube Table <="), newline(), newline();

    printf("Please enter the lower limit integer for the table: ");
    scanf("%d", &l);
    printf("Please enter the upper limit integer for the table: ");
    scanf("%d", &u);
    newline();

    for (; l <= u; l++)
        {
            printf("%6d %6d %6d", l, l*l, l*l*l);
            newline();
        }

    newline(), newline();

}