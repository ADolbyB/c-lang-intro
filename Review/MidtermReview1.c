/*
Joel Brigida
Midterm Review 1
Sprint 2020
*/

#include <stdio.h>
#define CENT_CONV 2.54
#define FEET_INCHES 12

void Q1();
double centimeter(int num1, double num2);
void Q2();
double divide(double num1, double num2);
void Q3_1();
void Q3_2();
void Q4();

int main()
{
    Q1();
    Q2();
    Q3_1();
    Q3_2();
    Q4();

    return 0;
}

void Q1()
{
    printf("Exercise #1:\nWrite a program that asks the user to enter a height in feet and inches and converts it to centimeters. Fractional inches should be allowed. Use the conversion 1 in = 2.54 cm. In your program implement user-defined function centimeters() that will take the feet and inches as input arguments and return the height in centimeters. Display results in the following format:\n\t5 feet and 10.30 inches is 178.56 centimeters\n\n");

    int feet;
    double inches, cm;

    printf("Enter feet> ");
    scanf("%d", &feet);
    printf("Enter inches> ");
    scanf("%lf", &inches);
    cm = centimeter(feet, inches);

    printf("%d feet and %.2f inches is %.2f centimeters", feet, inches, cm);

    printf("\n***************************************************************************************\n");
}

double centimeter(int num1, double num2)
{
    return (CENT_CONV*((num1*FEET_INCHES)+num2));
}

void Q2()
{
    printf("Exercise #2:\nWrite a program that requests two double numbers and prints the value of their difference divided by their product. In your program implement user-defined function divide() which takes two double arguments and returns their difference divided by their product, only if the product is not zero. If the product of the two double arguments is zero, divide() should return -1.\n\n");

    double num1, num2, ans;

    printf("Enter first number> ");
    scanf("%lf", &num1);
    printf("Enter second number> ");
    scanf("%lf", &num2);

    ans = divide(num1, num2);

    if (ans != -1)
      printf("ans = %.2f\n\n", ans);
    else
      printf("Error, undefined");

    printf("\n***************************************************************************************\n");
}

double divide(double num1, double num2)
{
  if (num1 * num2 != 0)
  {
    return (num1 - num2) / (num1 * num2);
  }
  else
  {
    return -1;
  }
}

void Q3_1()
{
    printf("Exercise #3, part 1:\nWrite assignment statements using the if else statement for the following:\n");
    printf("a. Assign a value of 0 to between if n is less than -k or greater than +k; otherwise, assign 1.\n\n");

    int n, k, between;

    n = 2;
    k = 8;

    if(n < -k || n > k)
    {
        between = 0;
    }
    else
    {
        between = 1;
    }

    printf("n is %d\nk is %d\nThe value of between is %d", n, k, between);

    printf("\n\nb. Assign a value of 1 to divisor if digit is a divisor of num; otherwise, assign a value of 0.\n\n");

    int digit, num, divisor;

    //YOUR CODE HERE

    printf("\n\nc. Assign a value of 1 to lowercase if ch is a lowercase letter; otherwise, assign a value of 0.\n\n");

    char ch;
    int lowercase;

    //YOUR CODE HERE

    printf("\n***************************************************************************************\n");
}

void Q3_2()
{
    printf("Exercise #3, part 2:\nRe-write the assignment statements using the conditional operator.\n");
    printf("a. Assign a value of 0 to between if n is less than -k or greater than +k; otherwise, assign 1.\n\n");

    int between, n, k;
      n = 2;
      k = 8;

    between = n < -k || n > k ? 0 : 1;

    printf("n is %d\nk is %d\nThe value of between is %d", n, k, between);

    printf("\n\nb. Assign a value of 1 to divisor if digit is a divisor of num; otherwise, assign a value of 0.\n\n");

    int num, divisor;

    //YOUR CODE HERE

    printf("\n\nc. Assign a value of 1 to lowercase if ch is a lowercase letter; otherwise, assign a value of 0.\n\n");

    char ch;
    int lowercase;

    //YOUR CODE HERE

    printf("\n***************************************************************************************\n");
}

void Q4()
{
    printf("Exercise #4:\nWhat value is assigned to x when y is 10.0?\n\n");

    double x=20.0, y = 10.0;

    if (y != (x - 10.0))
        x = x - 10.0;
    else
    {
        x = x / 2.0;
        x = 40 / x;
    }

    printf("a.  x = %.1f\n", x);

//    if ((y / 0.5) < 15.0)
//    {
//        x = 5 * y;
//        x = x / 2;
//    }
//    else
//        x = 3 * y;
//
//    printf("b.  x = %.1f\n", x);
//
//    //will cause a syntax error. correct the errors.
//    if (y < 15.0 && y >= 0.0)
//        x = 5 * y;
//        x = x / 7;
//    else
//        x = 2 * y
//
//    printf("c.  x = %.1f\n", x);

    printf("\n***************************************************************************************\n");
}