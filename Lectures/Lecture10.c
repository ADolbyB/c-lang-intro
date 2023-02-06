/**
Joel Brigida
COP2220 Lecture 10
Nested IF statement for test program pH level calculator
03-05-2020
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int pH;

    printf("Please enter a value for pH level: ");
    scanf("%d", &pH);

    if (pH <= 14 && pH > 0)
        if (pH > 7 && pH <= 12)
                printf("\nSubstance is Alkaline");
            else if (pH > 12)
                printf("\nSubstance is Very Alkaline!!");
            else if (pH == 7)
                printf("\nSubstance is Neutral");
            else if (pH > 2)
                printf("\nSubstance is Acidic");
            else if (pH > 0 && pH <= 2)
                printf("\nSubstance is Very Acidic!!");
    else
        printf("INVALID ENTRY");

    return 0;
}
