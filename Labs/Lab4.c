/**
Joel Brigida
COP2220 - 007
Lab #4
Dr. Sareh Taebi
Feb 27, 2020
*/

#include <stdio.h>
#include <stdlib.h>

void Q1(void);                  // Function Prototypes
void senior_status(void);
void overdraw_status(void);
double Q2(int n, int sum);
void Q3(void);
double Q4(int num1, int num2);


int main()
{

    Q1();      // Function determines senior status by age, then determines bank account balance based on deductions.
    Q2(3, 24); // Calculates the average of an amount of integers "n" which add up to a total "sum"
    Q3();      // Takes user input of 3 integers "x", "y", and "z", adds them to a total "p", and outputs "TRUE" if p != 0 && (p > 2*z || p < x8y)
    Q4(2, 12); // Calculates and displays the absolute difference (always positive) between 2 numbers "num1" and "num2"

    return 0;

}

void Q1(void)
{

    senior_status(); // user defined function which determines whether a person is a senior, age >= 65, and prints the result.
    overdraw_status(); // user defined function which determines new balance amount in a bank account, or displays error message if the amount will cause account overdraw.


}

void senior_status(void) // User defined function to determine senior citizen status
{

    int age = 64; // Age is user entered variable "age"

    if (age >= 65) // Conditional statement to determine senior citizen status over age 65.
        printf("Age is greater than or equal to 65\n"); // Prints message if conditional is true (age >= 65)
    else
        printf("Age is less than 65\n"); // Prints message if conditional is false (age < 65)

}

void overdraw_status(void) // User defined ATM type function which displays account information and performs cash withdrawals.
{

    double deduct = 50.0; // User entered amount requested for withdrawal from bank account / ATM
    double balance = 150.0; // Actual balance of user's bank account available for withdrawal

    if (deduct <= balance) // Conditional statement to determine if user balance exceeds withdrawal request
    {
        balance = balance - deduct; // If deduction request <= user balance, then the money is withdrawn and the balance is updated by subtracting the withdrawal amount
        printf("New balance is $%.2f\n", balance); // Displays new balance amount after sucessful deduction / conditional is true.
    }
    else
    {
        printf("Deduction of $%.2f refused.\n", deduct); // Rejection message if conditional statement is false / withdrawal request exceeds balance.
        printf("Would overdraw account.\n"); // Displays the reason the withdrawal was refused.
        printf("Deduction Requested = $%.2f, Account Balance = $%.2f\n", deduct, balance); // Displays deduction requested amount and account balance
    }

}

double Q2(int n, int sum)
{

    double average;

    if (n > 0)
    {
        average = (double)sum / n;
        printf("The average of %d numbers totalling %d is %f\n", n, sum, average);
    }
    else
    {
        average = -1;
        printf("Error %.0f\n", average);
        printf("Error: argument invalid, number of values must be greater than 0.\n");
    }

    return (average);

}

void Q3(void)
{

    int x, y, z, p;

    printf("Please enter 3 numbers x, y and z: ");
    scanf(" %d %d %d", &x, &y, &z);

    p = x + y + z;

    if (p != 0 && (p > (2*z) || p < (x*y)))
    {
        printf("TRUE!\n");
    }
    else
    {
        p = 100;
        printf("Condition is false, variable P has been assigned a value of %d\n", p);
    }
}
double Q4(int num1, int num2)
{
    (num1 - num2 >= 0) ?
        (num2 = num1 - num2, printf("The absolute difference between the 2 numbers is %d\n", num2)) :
            (num2 = num2 - num1, printf("The absolute difference between the 2 numbers is %d\n", num2));

    return(num2);

}
