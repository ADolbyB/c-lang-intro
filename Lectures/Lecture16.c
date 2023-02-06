/**
Joel Brigida
COP2220 Lecture #16
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 5

void line(void);
void tab(void);
void plate(int q);
int cubeByValue(int *nPtr);
void separate(double num, char *signp, int *wholep, double *fracp);     // Used in Q2()
void modifyArray (int b[], int size);                                   // Used in Q5()
int  sumArray (int *b, int size);                                       // Used in Q5()
void Q1(void);
void Q2(void);
void Q3(void);
void Q4(void);
void Q5(void);
void Q6(void);
void Q7(void);

/**

These are the same, Use either convention:
void modifyArray( int b[], int size )
void modifyArray( int * b, int size )

*/

int main()
{

    //Q1();
    //Q2();
    //Q3();
    //Q4();
    Q5();
    //Q6();
    //Q7();

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

void Q1 (void)
{
    plate(1);

    int number = 5;

    cubeByValue(&number);

    printf("Value of number cubed is %d\n\n", number);
}

int cubeByValue(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr;
}
void Q2 (void)
{
    plate(2);

    double value;                       /* input - number to analyze */
    char sign;                          /* output - sign of value */
    int whole;                          /* output - whole number magnitude of value */
    double frac;                        /* fractional part of value */

    printf("Enter a value to anayze: "); /* Gets data */
    scanf("%lf", &value);

    separate(value, &sign, &whole, &frac);  /* Separates data into three parts */

    line(), printf("Parts of %f:", value), line();
    printf("Sign: %c", sign), line();
    printf("Whole number magnitude: %d", whole), line();
    printf("Fractional part: %f", frac), line();
}

void separate(double num, char *signp, int *wholep, double *fracp)
{
    double magnitude;               /* local variable - magnitude of sum */

    if (num < 0)                    /* determines sign of num */
        *signp = '-';
    else if (num == 0)
        *signp = ' ';
    else
        *signp = '+';

    magnitude = fabs(num);          /* Finds magnitude of num (absolute value) and separates it into whole and fractional parts */
    *wholep = floor(magnitude);
    *fracp = magnitude - *wholep;
}

void Q3 (void)
{
    plate(3);

    int flizny[7] = {1, 2, 3, 4, 5, 6, 7};
    int *ptr;                               // array declaration, pointer declaration
    //flizny == &flizny[0];                   // name of array is the address of the first element
    ptr = flizny;                           // ptr carries the address of the array

    printf("Address of flizny = %p", flizny), line();
    printf("Address of flizny = %p", &flizny); line();
    printf("Address of ptr = %p", &ptr), line();
    printf("Address of what ptr points to = %p", ptr), line();

    ptr++;

    line();
    printf("Address of flizny = %p", flizny), line();
    printf("Address of flizny = %p", &flizny); line();
    printf("Address of ptr = %p", &ptr), line();
    printf("Address of what ptr points to = %p", ptr), line();
}

void Q4 (void)
{
    plate(4);

    int v[5];
    int *vPtr;

    vPtr = &v[0];
    vPtr = v;                                     //alternatively

    //vPtr + 3 == &v[3];                          //same address
    //*(vPtr + 3) == v[3];                        //same value

    //*(v + 2);                                   // value of the 3rd element of v: v[2]
    //*v + 2;                                     // 2 added to the value of the 1st element

    // C language standard describes array notation in terms of pointers
    // it defines the array ar[n] to mean *(ar + n)
    // (ar + n) means: "Go to memory location ar, move over n units, and retrieve the value there.“
}

void Q5 (void)
{

    plate(5);

    int fruitCount[SIZE]= {1,2,3,4,5};
    int i, total;
    int *Ptr;

    Ptr = fruitCount;               /** All are the same, just expressed differently */

    Ptr = &fruitCount[0];           /** All 3 point to &fruitCount[0] */

    Ptr = &fruitCount;

    printf("\nfruitCount: %p, \n&fruitCount[0]: %p, \n&fruitCount: %p\n\n", fruitCount, &fruitCount[0], &fruitCount);

    // print array address

    // print address of second element and it's value using pointer

    printf("Value of fruitCount[1] = %d\n", fruitCount[1]);
    printf("Value of fruitCount[1] = %d\n", *(fruitCount + 1));
    printf("Value of fruitCount[1] = %d\n\n", *(Ptr + 1));

    // print array element 4 using pointer

    printf("Value of fruitCount[4] = %d\n", fruitCount[4]);
    printf("Value of fruitCount[4] = %d\n", *(fruitCount + 4));
    printf("Value of fruitCount[4] = %d\n", *(Ptr + 4));

    printf("\nThe original array is:\n");

    for (i = 0; i < SIZE; i++)
        printf("%5d",fruitCount[i]);

    // use a loop to print the array values

    modifyArray(fruitCount, SIZE);                  // function call

    printf("\n\nThe modified array is:\n");

    // use a loop to print the modified array values
    for (i = 0; i < SIZE; i++)
        printf("%5d", fruitCount[i]);

    total = sumArray(fruitCount, SIZE); 	        // another function call with return value

    // print the total value

    printf("\n\nThe summation of all array elements are %d", total);

}

void modifyArray (int b[], int size)
{
    // the array elements should be multiplied by 4
    int i;
    for (i = 0; i < size; i++)
        b[i] *= 4;

        // *(b + i) *= 4;
}

int  sumArray (int *b, int size)
{
    int i, total;                                   // write the array sum values and return the sum
    total = 0;
    for (i = 0; i < size; i++)

    total += b[i];

    return (total);
}

void Q6(void)
{
    char t1[6];
    char t2[] = "Happy Studying";

    strncpy(t1, t2, 5);

    t1[5] = '\0';

    printf("value of t1[] = %s", t1);
}

void Q7(void)
{
    double rootbeer[10];
    double things[10][5];

    double *pf;
    double value = 2.2;
    int i = 3;

    *pf = value;                            /// correct
    ///pf = value;                          /// syntax error
    rootbeer[0] = value;                    /// correct
    ///rootbeer = value;                    /// syntax error
}