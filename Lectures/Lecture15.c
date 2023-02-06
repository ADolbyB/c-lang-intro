/**
Joel Brigida
Lecture 15
Practice pointer operation: * and &
*/

#include <stdio.h>
#include <stdlib.h>

void Q1(void);
void Q2(void);

int main()
{

    //Q1();
    Q2();

    return 0;
}

void Q1(void)
{
    int a = 9;

    int *aPtr;              /// Pointer declaration
    //aPtr = NULL;
    aPtr = &a;

    char b = 'A';
    char *bPtr;
    bPtr = &b;

    printf("Pointer aPtr is storing address: %p\n", aPtr);
    printf("\nThe address of variable a is: %p\n", &a);
    printf("\nThe value my pointer is pointing to is %d\n", *aPtr);
    printf("\nThe two operators * and & are compliments of one another: &*aPtr: %p, *&aPtr: %p\n", &*aPtr, *&aPtr);
    printf("\nThe address of the pointer itself is: %p\n", &aPtr);

    printf("\nMy new pointer bPtr is pointing to this value: %c\n", *bPtr);
    printf("\nThe address of the new pointer bPtr is: %p\n", &bPtr);
}

void Q2(void)
{
    int *iPtr;                   /* iPtr is a pointer to an integer variable */

    char *cPtr;                  /* cPtr is a pointer to a character variable */

    double *fPtr, *gPtr;         /* fPtr, gPtr are pointers to double variables */

    int pooh = 20;
    int bah = 10;
    int *Ptr;

    Ptr = &pooh;                 /* assigns pooh's address to Ptr */

    Ptr = &bah;                  /* make Ptr point to bah instead of to pooh */

    /* The indirection (dereferencing) Operator : '*' */

    printf("*Ptr = %d\n", *Ptr); /* printing the value Ptr points to */
    int val;
    val = *Ptr;                  /* Another indirect reference: The result: val = bah */

    printf("val = %d\n", val);
}