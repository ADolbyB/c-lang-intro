/**
Joel Brigida
SI 4-20-2020
*/

#include <stdio.h>
void Q1_Q2();
void Q3();
void starbar();

int main(void)
{
    //Q1_Q2();
    Q3();
    return 0;
}

void Q1_Q2()
{
    printf("Exercises 1 and 2:\n\n");

    int lima = 15, pinto = 7;
    int *mPtr, *nPtr;

    printf("lima = %d\n\npinto = %d\n\naddress of lima = %p\n\naddress of pinto = %p\n\n",lima,pinto,&lima,&pinto);

    mPtr = &lima;
    nPtr = &pinto;

    printf("mPtr points to address %p\n\nnPtr points to address %p\n\n",mPtr,nPtr);
    printf("The value at the address that mPtr points to is %d\n\n",*mPtr);
    printf("The value at the address that nPtr points to is %d\n\n",*nPtr);

    *mPtr = *mPtr % *nPtr;
    *nPtr = *nPtr - *mPtr;

    printf("The value at the address that mPtr points to is %d\n\n",*mPtr);
    printf("The value at the address that nPtr points to is %d\n\n",*nPtr);
    printf("lima = %d\n\npinto = %d\n\n",lima,pinto);

    mPtr = &pinto;
    nPtr = &lima;

    printf("mPtr now points to address %p\n\nnPtr now points to address %p\n\n",mPtr,nPtr);
    printf("The value at the address that mPtr points to is %d\n\n",*mPtr);
    printf("The value at the address that nPtr points to is %d\n\n",*nPtr);

    *mPtr -= 1;
    *nPtr += 1;

    printf("The value at the address that mPtr points to is %d\n\n",*mPtr);
    printf("The value at the address that nPtr points to is %d\n\n",*nPtr);
    printf("lima = %d\n\npinto = %d\n\n",lima,pinto);

    starbar();
}

void Q3()
{
    printf("Exercise 3:\n\n");

    int x = 45, z = 63;
    char y = '#';
    int *iPtr;

    //x = &z;         // an address is being assigned to an integer variable
    //printf("x = %d\n\n", x);

    iPtr = &x;       // pointer should be initialized to NULL, 0 or an address
    printf("Value of x: *iPtr = %d\n", *iPtr);
    printf("iPtr points to address: %p\n", iPtr);
    printf("&*iPtr output should be the same: %p\n", &*iPtr);
    printf("Address of x: &x = %p\n", &x);
    printf("Address of pointer iPtr: &iPtr = %p\n\n", &iPtr);

    *iPtr = y;      // a character is being assigned to the value of the integer that iPtr points to
    printf("Value of y: *iPtr = %c (actual char value)\n", *iPtr);  // prints ASCII value instead of the actual character
    printf("Value of y: *iPtr = %d (ASCII table value)\n", *iPtr);  // prints character value
    printf("iPtr points to address: %p\n", iPtr);
    printf("&*iPtr output should be the same: %p\n", &*iPtr);
    printf("Address of y: &y = %p\n", &y);
    printf("Address of pointer iPtr: &iPtr = %p\n\n", &iPtr);

    //*iPtr = &y;     // the address of a character is being assigned to the value of
    //printf("*iPtr = %d\n\n", *iPtr);

    starbar();
}

void starbar()
{
    int i;
    printf("\n");
    for(i = 0; i < 55; i++)
        printf("*");
    printf("\n");
}