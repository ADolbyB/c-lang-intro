/*
Joel Brigida
COP 2220
SI Week 11
*/

#include <stdio.h>
#include <math.h>

void warmup();
void Q1_a();
void Q1_b();
void Q2();
void Q3();
void Q3a();
void starbar();

int main()
{
    warmup();
    Q1_a();
    Q1_b();
    Q2();
    Q3();
    Q3a();

    return 0;
}

void warmup()
{
    printf("Warm-up:\n\n");

    int x = 4;
    x++;                                /// x = x + 1
    printf("x = %d\n", x--);            /// printf("%d\n", x); x = x - 1;
    ++x;                                /// x = x + 1;
    printf("x = %d\n", --x);            /// x = x - 1; printf("%d\n", x);

    starbar();
}

void Q1_a()
{
    printf("Exercise 1a:\n\n");

    int i = 0;

    while (++i < 4)
        printf("Hi! ");
    while (i++ < 8)
        printf("Bye! ");

    starbar();
}

void Q1_b()
{
    printf("Exercise 1b:\n\n");

    int sneeze = 0;

    while (sneeze < 4)
        switch (++sneeze)
        {
            case 0:
                printf("Dia leat! ");
                break;
            case 1:
                printf("Salud! ");
                break;
            case 2:
                printf("Gesondheid! ");
                break;
            case 3:
                printf("Naz drowie! ");
                break;
            default:
                printf("Bless you! ");
        }
    starbar();
}

void Q2()
{
    printf("Exercise 2:\n\n");

    int sneeze;

    for(sneeze = 1; sneeze <= 4; sneeze++)
        switch (sneeze)
        {
            case 0:
                printf("Dia leat! ");
                break;
            case 1:
                printf("Salud! ");
                break;
            case 2:
                printf("Gesondheid! ");
                break;
            case 3:
                printf("Naz drowie! ");
                break;
            default:
                printf("Bless you! ");
        }
    starbar();
}

void Q3()
{
    printf("Exercise 3:\n\n");

    int count;

    for (count = 1; count <= 9; count++)
        printf("%8.1f", pow(2, count));

    printf("\n");
    starbar();
}

void Q3a(void)
{

    printf("Exercise 3a:\n\n");

    double prod = 1;
    int count;

    for(count = 1; count <=9; count++)
        {
            prod *= 2;
            printf("%8.1f", prod);
        }
        printf("\n");
    starbar();
}

void starbar()
{
    int i;
    printf("\n\n");
    for (i = 0; i < 55; i++)
        printf("*");
    printf("\n\n");
}
