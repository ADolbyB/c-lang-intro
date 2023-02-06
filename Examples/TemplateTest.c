/**
Joel Brigida
Dr. Sareh Taebi
COP2220-007
This is a simple assignment boiler plate I created
*/

#include <stdio.h>
#include <stdlib.h>

void line(void);
void tab(void);
void plate(int q);
void Q1(void);
void Q2(void);
void Q3(void);
void Q4(void);
void Q5(void);

int main()
{

    Q1();
    Q2();
    Q3();
    Q4();
    Q5();

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
    printf("TEST");
}

void Q2 (void)
{
    plate(2);
    printf("TEST 2");
}

void Q3 (void)
{
    plate(3);
    printf("TEST 3");
}

void Q4 (void)
{
    plate(4);
    printf("TEST 4");
}

void Q5 (void)
{
    plate(5);
    printf("TEST 5");
}
