/**
Joel Brigida
SI Session 2/13/2020
COP2220-007
*/

#include <stdio.h>
#include <stdlib.h>

double average(int x, int y, int z);
void Q3();

int main()
{
    Q3();           // Calculates the average of 3 integers

    return 0;
}

double average(int x, int y, int z)
{

    double ave;
    ave = ((double)x + y + z) / 3;

    return(ave);
}

void Q3(void)
{

    printf("\t=> INTEGER AVERAGE CALCULATOR <=");
    int x, y, z;
    double avg;

    printf("\n\nEnter three integers to average: ");
    scanf(" %d %d %d", &x, &y, &z);

    avg = average(x, y, z);

    printf("\n\nThe average of the 3 numbers is %f", avg);

}
