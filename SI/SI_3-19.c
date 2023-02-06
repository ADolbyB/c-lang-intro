/**
Joel Brigida
SI Session 3/05/2020
Week 10
*/

#include <stdio.h>

void Q1();
void Q2();
void Q3();
void Q4();
void Q5();
void Q6();
void starbar();

int main()
{
    //Q1();
    //Q2();
    //Q3();
    //Q4();
    //Q5();
    Q6();

    return 0;
}

void Q1()
{
    printf("Exercise 1:\n\n");

    int swan = 0, blue = 3, neptune = 5, saturn = 4,
        kiwi = 14, apple = 3, banana = 4;

    //swan = swan + 3;
    swan += 3;
    printf("swan = %d\n", swan);

    //blue = blue - 2;
    blue -= 2;
    printf("blue = %d\n", blue);

    //neptune = neptune - saturn;
    neptune -= saturn;
    printf("neptune = %d\n", neptune);

    //kiwi = kiwi / (apple + banana);
    kiwi /= apple + banana;
    printf("kiwi = %d\n", kiwi);

    starbar();
}

void Q2()
{
    printf("Exercise 2:\n\n");

    int quack = 10, bork = 5;
    double meow = 0.5;

    quack *= 10;    // 10 * 10 = 100
    printf("quack = %3d\n", quack);

    quack /= bork / meow;   // 100 / (5/0.5) = 10
    printf("quack = %3d\n", quack);

    quack %= bork;
   //printf("quack = %3d\n", quack);

    quack += (int)(bork * meow);
    //printf("quack = %3d\n", quack);

    starbar();
}

void Q3()
{
    printf("Exercise 3:\n\n");

    int value = 36;

    while (value > 0)
    {
        printf("%3d", value);
        value /= 2;
    }
    printf("\nAfter loop termination, value is %d\n", value);
    starbar();
}


void Q4()
{
    printf("Exercise 4:\n\n");

    int n = 8, sum = 0, odd = 1;

    printf("sum  odd\n");
    while(odd < n)
    {
        sum += odd;
        odd += 2;
        printf("%3d%5d\n", sum, odd);  //print value sum and odd each loop iteration
    }
    //printf("\nThe sum of all odd numbers less than %d is %d\n", n, sum);

    starbar();
}

void Q5()
{
    printf("Exercise 5:\n\n");

    char lowercase;

    lowercase = 'a';

    while (lowercase <= 'z')
    {
        printf("%c ", lowercase);
        lowercase+=1;
    }
    printf("\n");
    starbar();
}

void Q6() // Need to check if 'n' is even 1st. If even, add n to (n - 2), calculate sum & repeat while n > 0
          // If not even, decrement 'n' by one, then add new 'n" to (n - 2), calculate sume & repeat shile n > 0
{
    printf("Exercise 6:\n\n");

    int n, n2, sum;

    printf("Enter an integer: ");
    scanf("%d", &n);

    n2 = n;
    sum = 0;

    while (n > 0)
        {
            printf("value of n: %d\n\n", n);
            sum = sum + n;
            printf("value of n: %d\n\n", n);
            n = n - 2;
            printf("value of n: %d\n\n", n);

        }

    printf("\nThe sum of all even numbers less than %d is %d\n", n2, sum);

    starbar();
}

void starbar()
{
    int i = 0;
    printf("\n\n");
    while (i < 55)
    {
        printf("*");
        i += 1;
    }
    printf("\n\n");
}
