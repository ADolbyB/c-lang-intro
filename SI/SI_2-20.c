/**
Joel Brigida
SI Session 2/13/2020
COP2220-007
*/

/***********************************************************************************************************
EXERCISE #1:
Write a program to compute and display the total cost of avocados given the cost per avocado and the number
of avocados purchased. A 6% sales tax should be included in the total cost. Include user-defined function
avocados() in your program. The function will accept the cost per avocado and number of avocados as its two
input arguments and will return the total cost.

Here is a sample run:
    Enter unit price> 1.00
    Enter number of avocados> 5
    Total: $  5.30
**************************************************************************************************/
#include <stdio.h>
#define SALES_TAX 0.06
#define TAX_PERCENT 6.0

double avocado(double x, int y);

int main()
{
    int num_avo;        //number of avocados purchased
    double unit_price;  //price per avocado
    double total_price;

    //prompt user to enter the price per avocado
    //and the number of avocados being purchased
    printf("\t=> AVOCADO PRICE CALCULATOR <=");

    printf("\n\nEnter unit price: ");
    scanf("%lf", &unit_price);
    printf("\n\nEnter number of avocados: ");
    scanf("%d", &num_avo);

    total_price = avocado(unit_price, num_avo);

    printf("\n\nThe total price after %.1f%% tax is $%.2f", TAX_PERCENT, total_price);
    return 0;
}

double avocado(double x, int y)

{
    double total=(x * y) + (x * y * SALES_TAX);
    return total;
}
