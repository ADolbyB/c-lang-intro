/**
Lecture 11
Joel Brigida
While Loops
*/

#include <stdio.h>
#include <stdlib.h>

void new_line(void);
void Q1(void);
void count_star(void);
void Q2(void);
void Q3(void);
void Q4(void);
void Q5(void);
void Q6(void);

int main()
{

    //Q1();
    //Q2();
    //Q3();
    //Q4();
    //Q5();
    Q6();

    return 0;
}

void Q1(void)                               /// Display 10 rows of 10 asterisks with a loop
{

    int count_row = 0;
    while (count_row < 10)
        {
            count_star();
            count_row += 1;
            //count_row = count_row + 1             // Alternate way to do it
        }
}

void count_star(void)                       /// Display 10 Asterisks with a loop
{

    int count_star = 0;                     // If counter starts at 0 and ends at 9 ( < 10 ), then 10 stars are printed.
    while (count_star < 10)                 // If counter starts at 1 and ends at 10 ( <= 10 ), then 10 stars are printed.
        {
            printf("*");
            count_star = count_star + 1;        // Omitting this step results in an "infinite loop"
        }

        new_line();
}

void Q2(void)                              /// Display columns of numbers justified to the right
{

    int i = 0;
    while (i <= 5)
        {

        printf("%3d %3d\n", i, 10 - i);
        i = i + 1;
        }
    new_line(), new_line();
}

void new_line(void)
{
    printf("\n");
}

void Q3(void)
{
    int n, ev;

    printf("Please enter an integer for \'n\': ");
    scanf("%d", &n);

    ev = 0;
    while (ev < n)
        {

        printf("%3d", ev);                      // Setting 'n' too high will result in program running for an extended period of time (have to kill process)
        ev = ev + 2;

        }
    new_line(), new_line();
}

void Q4(void)                                       /// Program that displays powers of user defined "x" from x^1 to x^4
{
    int x, product, count;

    printf("Enter an integer: ");
    scanf("%d", &x);

    product = x;
    count = 0;

    while (count < 4)
        {
            printf("%d", product);
            new_line();
            product *= x;
            //product = product * x;                // alternate way to do it.
            count += 1;
            //count = count + 1;                    // alternate way to do it.
        }
        printf("Loop condition is now false, product = %d", product), new_line();
}

void Q5(void)
{
    int product = 1;                                    // Find the first power of 'n' that is > 100
    int n;

    printf("Please enter an integer \'n\': ");
    scanf("%d", &n), new_line();

    while (product <= 100)
        {
            product = n * product;
            printf("%3d", product), new_line();             // displays each calculation individually
        }
    new_line(), printf("The 1st power of %d > 100 = %d", n, product);
}

void Q6(void)                           // Compute total payroll for a company
{
    double total_pay;                   // Total company payroll
    int count_emp;                      // Current employee
    int number_emp;                     // Total number of employees
    double hours;                       // Hours worked
    double rate;                        // Hourly rate
    double pay;                         // Employee total pay (rate * hours)

    printf("Please enter number of employees: ");           // determine number of employees
    scanf("%d", &number_emp);

    total_pay = 0.0;                    // Initialize variables before while loop
    count_emp = 0;
    while (count_emp < number_emp)
        {
            printf("Employee #%d: Hours => ", count_emp + 1);
            scanf("%lf", &hours);
            printf("Employee #%d: Rate => ", count_emp + 1);
            scanf("%lf", &rate);

            pay = hours * rate;

            printf("Pay is $%6.2f", pay), new_line(), new_line();

            total_pay += pay;
            //total_pay = total_pay + pay;               // Alternate way to do it.
            //count_emp = count_emp + 1;
            count_emp += 1;                              // Alternate way to do it.

        }
    printf("All Employees Processed."), new_line();
    printf("Total Payroll is $%8.2f", total_pay), new_line();
}