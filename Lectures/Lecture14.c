/**
Joel Brigida
Lecture 14
COP2220 - Arrays
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 12                     /// Practice size of array as constant macro
#define NUMBER_EMP 7


void line(void);
void tab(void);
void plate(int q);
void Q0(void);
void Q1(void);
void Q1a(void);
void Q2(void);
void Q3(void);
void Q4(void);
void Q5(void);
void Q6(void);

int main()
{

    //Q0();
    //Q1();
    Q1a();
    //Q2();
    //Q3();
    //Q4();
    //Q5();
    //Q6();

    return 0;
}

void line(void)
{
    printf("\n");
}

void tab(void)
{
    printf("\t");
}

void plate(int q)
{
    line(), tab(), printf("=> Question #%d <=", q), line(), line();
}

void Q0(void)
{
    int a, b, n, x;
    a = 1;
    b = 2;

    int c[] = {5, 3, 10, 11, 31, 14};

    printf("c[0] + c[1] + c[3] = %d", c[0] + c[1] + c[2]);           /// prints the sum of the values contained in the first three elements of c[]

    //c[a + b] += 2;                              /// adds 2 to array element c[2 + 1]. c[3] = 12 now
    //n = c[5] / 2;                               /// divides the value of the seventh array element c[6] and assigns the result to the variable x

    line();
    printf("Enter new value for c[4]: ");
    scanf("%d", &c[4]);                         /// can use an array element as any regular variable: read a value into the 5th element

    for(x = 0; x < 6; x++)
        printf("c[%d] = %d\n", x, c[x]);

                            /** Arrays can be any data type */

    int nannies[22] = {0};                            /** an array to hold 22 integers */
    char actors[26] = {0};                            /** an array to hold 26 characters */
    double big[500] = {0};                            /** an array to hold 500 numbers */

}

void Q1(void)
{
    plate(1);

    int i;

    int n[10] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };

    printf("Element: Contents:\n\n");

    for (i = 0; i < 10; i++)
        {
            printf("%7d %9d\n", i, n[i] );
        }

    line(), printf("SizeOf array \'n\' = %ld", sizeof(n)), line();              /// Note that value of 'sizeof' needs "%ld" for "long unsigned int"
    line(), printf("# of elements in array = %ld", (sizeof(n) / sizeof(n[0]))), line();
}

void Q1a(void)
{
                                /** Array initialization and printing with a for loop */
    int square[11], i;

    for (i = 0; i < 11; i++)
        square[i] = i * i;

    for (i = 0; i < 11; i++)
        printf("square[%2d] = %3d\n", i, square[i]);

}

void Q2 (void)
{

    plate(2);

    int a[SIZE] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
    int i;                                  /* counter */
    int total = 0;                          /* sum of array */

    for (i = 0; i < SIZE; i++)
        {
            total += a[i];
        }
    line(), printf("Total of array element values is %d", total), line();
}

void Q3 (void)
{
    plate(3);

    int count_emp;
    double hours[NUMBER_EMP];
    double pay[NUMBER_EMP];
    double rate[NUMBER_EMP];
    double total_pay = 0.0;

    for (count_emp = 0; count_emp < NUMBER_EMP; count_emp += 1)
        {
            printf("Employee #%d Hours: ", (count_emp + 1));
            scanf("%lf", &hours[count_emp]);
            printf("Employee #%d Rate: $ ", (count_emp +1));
            scanf("%lf", &rate[count_emp]);
            pay[count_emp] = hours[count_emp] * rate[count_emp];
            printf("Employee #%d Pay is $%6.2f\n\n", (count_emp + 1), pay[count_emp]);
            total_pay += pay[count_emp];
        }

    printf("All employees processed\n");
    printf("Total payroll is $%8.2f\n", total_pay);
}

void Q4 (void)
{
    plate(4);

    int array1[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
    int array2[2][3] = { 1, 2, 3, 4, 5 };
    int array3[2][3] = { { 1, 2 }, { 4 } };
}

void Q5 (void)
{
/*
    int x, y;

    plate(5);

    for ( y = 0; y <= 2; y++ )                  // 3 rows
        {
            for ( x = 0; x <= 3; x++ )          // 4 columns
                {
                    printf( "%d ", a[x][y] );
                }
        printf( "\n" );
        }
*/
}

void Q6 (void)
{

    // Intel Core i7-3720QM CPU (64 Bit)

    printf("short size: %d\n", sizeof(short));

    printf("int size: %d\n", sizeof(int));

    printf("float size: %d\n", sizeof(float));

    printf("double size: %d\n", sizeof(double));

    printf("char size: %d\n", sizeof(char));

}
