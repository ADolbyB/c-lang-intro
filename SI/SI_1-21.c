/* 
Joel Brigida
SI Session Wk 2 
*/

/*header*/
#include <stdio.h>             // Pre-Processor Directive - Reference to C Library "stdio.h"
#include <stdlib.h>            // Pre-Processor Directive - Reference to C Library "stdio.h"

#define KM_TO_MILES 1.609      // Example of using constant macro

int main()      /*main function*/
{
    /*body*/
    //Body contains:
        //-variable declarations
        //-executable statements

    printf("Hello world!\n");

    int miles = 3;
    double km = 3 * KM_TO_MILES;        //example of using constant macro
    printf("There are %f kilometers in %d miles", km, miles);       //%f and %d are placeholders

    return 0;
}