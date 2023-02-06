/**
COP2220 Final Review
Spring 2020 - "Class of COVID-19"
*/

#include <math.h>
#include <stdio.h>
//#define PI 3.14159

void slide04();
void slide05();
void slide06();
void slide07();
void slide09();
double math_stuff(int h, double k);
void slide10();
void slide11();
void slide12();
void slide13();
void slide14();
void slide15();
void slide16();
void slide17();
void slide18();
void slide19();
void slide20();
void slide22();
void zero(int * a);
void zero1(int array1[], int x);
void slide23();
void slide24();
void slide25();
void slide26();
void slide27();
void slide28();

int main()
{
    //slide04();
    //slide05();
    //slide06();
    //slide07();
    //slide09();
    //slide10();
    //slide11();
    //slide12();
    //slide13();
    //slide14();
    //slide15();
    //slide16();
    //slide17();
    //slide18();
    //slide19();
    //slide20();
    //slide21();
    //slide22();
    //slide23();
    //slide24();
    //slide25();
    slide26();
    //slide27();
    //slide28();
}
void slide04()
{
    #define IN_TO_CM 2.54

    double in, cm;

    printf("Enter the length in inches\n>");
    scanf("%lf",&in);
    cm = in * IN_TO_CM;
    printf("%.2f inches = %.2f centimeters\n",in, cm);
}

void slide05()
{
    int goo = 5, bam = 12, hah = 6, eek;
    double meh;

    eek = goo + bam % hah;
    meh = eek * goo + hah / 4;

    printf("eek is %d\nmeh is %.2f\n", eek, meh);
}

void slide06()
{
    int moo = 6;
    double koi = 12.82673;
    printf("%9.3f%5d",koi,moo);
}

void slide07()
{
    int c = 15;
	double n = 7.0, fn;

	///#include <math.h>

	fn = sqrt((3 * n) * (floor(n / 4)) + (c * (n * n)));                    /// w/o using pow() function

	printf("#1 fn = %f\n\n", fn);

	fn = sqrt((3 * n) * (floor(n / 4)) + (c * (pow(n, 2))));                /// Alternatively w/ pow() function

	printf("#2 fn = %f\n\n", fn);

}

void slide09()
{
    int num1 = 7;
    double num2 = 13.2, num3;

    num3 = math_stuff(num2, num2);

    printf("num3 = %f\n\n", num3);

}

double math_stuff(int h, double k)
{
    return (h * k / 3.5);
}

void slide10()
{
    int rah = 17, nom = 2, tot = 9;

    int n_value = (nom != 3 || tot < 7 && rah >= 10);

    printf("The numerical value is %d\n", n_value);

    n_value = !(nom != 3 || tot < 7 && rah >= 10);

    printf("The numerical value is %d\n", n_value);
}

void slide11()
{
    int happy = 2;

    if (happy)                                  /// happy is >= 1, so logical expression = true
        printf("Nice to see you!\n");
    else
        printf("Put on a happy face\n");
}

void slide12()
{
    int rex, mum, gig;

    printf("Enter integer for \'rex\' and \'mum\': ");
    scanf("%d %d", &rex, &mum);

    printf("You entered: %d and %d\n\n", rex, mum);

    if (rex > mum)
        {
            gig = rex;
            printf("gig = rex = %d\n\n", gig);
        }
    else if (mum > rex)
        {
            gig = mum;
            printf("gig = mum = %d\n\n", mum);
        }
    else
        printf("the values are equal");

    gig = rex > mum ? rex : mum;                        /// alternative with conditional operator

    printf("gig = %d\n\n", gig);


}

void slide13()
{
    int number = 5;

    if (number > 6)
        if (number < 12)
            printf("You're close!\n");
    else
        printf("Sorry, you lose a turn!\n");                /// else statement belongs to 2nd "if" statement regardless of indentation.

    if (number > 6)
        {
            if (number < 12)
                printf("You're close!\n");
        }
    else                                                    /// Proper way to assign else statement to 1st if statement
        printf("Sorry, you lose a turn!\n");

}

void slide14()
{
    char fruit;
    int papaya = 0, banana = 0, mango = 0;

    printf("enter \'P\' for Papaya, \'B\' for banana, \'M\' for mango:");
    scanf(" %c", &fruit);

//    if (fruit == 'p' || fruit == 'P')
//        papaya++;
//    else if (fruit == 'b' || fruit == 'B')
//        banana++;
//    else if (fruit == 'm' || fruit == 'M')
//        mango++;
//    else
//        printf("Invalid entry\n");

    switch (fruit)
    {
        case 'P':
            papaya++;
            printf("papaya = %d", papaya);
            break;
        case 'p':
            papaya++;
            printf("papaya = %d", papaya);
            break;
        case 'B':
            banana++;
            printf("banana = %d", banana);
            break;
        case 'b':
            banana++;
            printf("banana = %d", banana);
            break;
        case 'M':
            mango++;
            printf("mango = %d", mango);
            break;
        case 'm':
            mango++;
            printf("mango = %d", mango);
            break;
        default:
            printf("Invalid entry!\n\n");
    }


}

void slide15()
{
    int n = 30;
    while (++n <= 33)                               /// 'n' is incremented BEFORE loop condition is checked (prefix operator)
        printf(" %d |", n);
}

void slide16()
{
    int n;
    ///int n = 30;                                  /// erroneous: n is initialized as 1 inside the for loop argument.

    for (n = 1; n * n < 200; n += 4)
        printf("%d\n", n);
}

void slide17()
{
    int n = 30;
    do
        printf(" %d |",n);
    while (++n <= 33);                              /// 'n' is incremented BEFORE loop condition is checked.
}

void slide18()
{
    int i, j, k = 5;

    for(i = k; i > 0; i--)                          /// vertical rows start at i = k = 5
        {
            for(j = i; j > 0; j--)                  /// horizontal columns start at j = i = 5
                printf("%d" , i);
            printf("\n");                           /// prints new line AFTER inner for loop execution
        }
}

void slide19()
{
    #define SIZE 10
    int i, x, fib[SIZE] = {0, 1};

	for(i = 2; i < SIZE; i++)
		fib[i] = fib[i - 2] + fib[i - 1];

	for(x = 0; x < SIZE; x++)
        {
            printf("fib[%d] = %d", x, fib[x]);
            printf("\n");
        }

    printf("fib[3] + fib[8] = %d", fib[3] + fib[8]);
}

void slide20()
{
    int x, y;

    int pug[3][4] = {{24, 46, 68}, {13}, {74, 96}};                     /// initializes array pug[][] to specified value

    printf("pug[2][1] = %d\n\n", pug[2][1]);

    for(y = 0; y < 3; y++)                                              /// Displays contents of array pug[][]
        {
            for(x = 0; x < 4; x++)
                {
                    printf("[%d][%d] = %3d ", x, y, pug[y][x]);
                }
                printf("\n");
        }
    printf("\n");
    printf("\n");

    for(y = 0; y < 3; y++)                                              /// Clears contents of array pug[][]
        {
            for(x = 0; x < 4; x++)
                {
                    pug[y][x] = 0;
                }
        }

    for(y = 0; y < 3; y++)                                              /// prints cleared contents of array pug[][]
        {
            for(x = 0; x < 4; x++)
                {
                    printf("[%d][%d] = %3d ", x, y, pug[y][x]);
                }
                printf("\n");
        }
}

void slide21()
{
    int kip = 6, pal = 3;
    int *p1, *p2;

    p1 = &kip;
    p2 = &pal;

    *p1 += *p2;
    *p2 = *p1 - 1;

    printf("%4d%4d%4d%4d\n", kip, *p1, pal, *p2);
}

void slide22()
{
    int flamingo;

    zero(&flamingo);

    printf("flamingo = %d", flamingo);
}

void zero(int * a)
{
    *a = 0;
}

void slide23()
{
    #define SIZE2 5
    int x, y;
    int hug[SIZE2] = {12,4,8,15};
	int *aPtr;

	for(y = 0; y < SIZE2; y++)
        printf("hug[%d] = %2d ", x, hug[y]);

    printf("\n\n");

	aPtr = hug;
	aPtr += 3;
	*aPtr %= 2;
	aPtr--;
	*aPtr /= 2;

	for(x = 0; x < SIZE2; x++)
        printf("hug[%d] = %2d ", x, hug[x]);

    printf("\n\n");

}

void slide24()
{
    int i;
    int value = 10;

    int test_array[value];

    zero1(test_array, value);

    for(i = 0; i < value; i++)
        {
            printf("[%d] = %2d ", i, test_array[i]);
            printf("\n");
        }
}

void zero1(int array1[], int x)
{
    int i;

    for(i = 0; i < x; i++)
        array1[i] = 0;
}

void slide25()
{

}

void slide26()
{
    char a[20] = "Testing";
    char b[20] = "Testing1";

    if (strlen(a) + strlen(b) <= (sizeof(a) / sizeof(a[0])));
        {
            printf("a < b\n");
            strcat(a, b);
            printf("%s", a);
        }
}

void slide27()
{
    char str1[] = "gawsie";
    char str2[] = "bletonism";
    char whimsical[strlen(str1)+strlen(str2)];
    strcpy(whimsical, str2);
    strcpy(&whimsical[2], &str1[1]);
    printf("%s!", whimsical);

}

void slide28()
{
    char ch;
}
