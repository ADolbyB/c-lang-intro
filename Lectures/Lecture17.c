/**
Lecture 17
String Arrays
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define NUM_PEOPLE 30                           /// Number of people on the list going downward.
#define NAME_LEN 25                             /// Width of chart (number of columns)
#define LENGTH 12
#define STRING_LEN 10
#define STRSIZ 15
#define SIZE 20

void line(void);
void tab(void);
void plate(int q);
void starts_with_X(void);
void Q1(void);
void Q2(void);
void Q3(void);
void Q4(void);
void Q5(void);
void Q6(void);
void Q7(void);
void Q8(void);
void Q9(void);

int main()
{

    //Q1();
    //Q2();
    //Q3();
    //Q4();
    //Q5();
    //Q6();
    //Q7();
    //Q8();
    Q9();

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

void Q1(void)
{                            // This program would take any string, and convert it to uppercase lette
    plate(1);

    // declare 2 string arrays
    char ch2 []= "Stay Home! ";
    char ch [100];
    int i;

    //making use of input/output library functions
    printf("Enter a string that is not longer than 80 characters!");
    gets(ch);

    // using the string. h functions
    strcat(ch,ch2);

    //prints the string
    puts(ch);

    //using both ctype library functions and the string library functions
    for (i = 0; i < strlen(ch); i++)
    {
        if(islower(ch[i]))
            ch[i] = toupper(ch[i]);
    }
    // using %s left justified.

    printf("\nmodified string: \n%-100s",ch);

}

void Q2 (void)
{
    char vowels_X[] = {'A', 'E', 'I', 'O', 'U'};                            /// NOT a string array!!! It is "only" a character array

    char vowels[] = {'A', 'E', 'I', 'O', 'U', '\0'};                        /// *NOW* it's a string array

    char vowels_1[] = "AEIOU";                                              /// Also a string array (the \0 null character is assumed).

    char strings[] = "This is a long string";                               /// Also a string array

    /** #define NUM_PEOPLE 30 */
    /** #define NAME_LEN 25 */

    /** Each row is one name, names are listed in subsequent lower rows */
    /** The number of columns (the width of the chart) must be larger than the longest name +1 for the null character. */

    char names[NUM_PEOPLE][NAME_LEN];

    /// The months are listed downward in 12 rows (&names[0] to &names[11]) and the  # of columns is the width of the chart (&[0] to &[9])

    char month[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    printf("%10s\n", month[5]);
    printf("%-10s\n", month[5]);

    int i;

    for (i = 0; i < LENGTH; i++)
        {
            printf("%10s\n", month[i]);
        }

    for (i = 0; i < LENGTH; i++)
        {
            printf("%-10s\n", month[i]);
        }

    /** Print right-justified */

    printf ("***%8s***%13s***\n\n", "Short", "Strings");

    /** Print left-justified */

    printf ("***%-8s***%-13s***\n\n", "Short", "Strings");

    printf ("***%-3s***%-3s***\n\n", "Short", "Strings");

    char president[]= "George Washington";

    printf("%25s\n\n", president);
    printf("%-25s\n\n", president);

    char president1[4][20]= {"George Washington", "John Adams", "Thomas Jefferson", "James Madison"};

    for (i = 0; i < 4; i++)
        {
            printf("%20s\n", president1[i]);
        }

    printf("\n\n");

    for (i = 0; i < 4; i++)
        {
            printf("%-20s\n", president1[i]);
        }

}

void Q3(void)
{
    /// #define STRING_LEN 10

    char dept[STRING_LEN];
    int course_num;
    char days[STRING_LEN];
    int time;
                /** If you use a scanf to read a string into a character array, don't use the '&' */

                /** scanf skips leading whitespace characters such as blanks, newlines, and tabs.
                scanf places the null character at the end of the string in its array argument. */

    printf("Enter Dept Code, course number, days, and ");
    printf("time like this:\nCOSC 2060 MWF 1410\n\n");
    scanf("%s%d%s%d", dept, &course_num, days, &time);      /// Note that the string references lack the & address operator because they are pointers.
    printf("Class %s %d meets %s at %d\n\n", dept, course_num, days, time);

}

void Q4(void)
{
            /** Scanning a Full Line (gets()) */

            /** For interactive input of one complete line of data, use the gets function.
            The \n character representing the <return> or <enter> key pressed at the end
                    of the line is not stored. Part of the <stdio.h> library */

    char line[80];
    printf("Type in a line of data:\n");
    gets(line);

    puts(line); // Prints out entire contents of the string
    //printf("%s", line);

}

void Q5(void)
{
            /** String Library Functions : <string.h> */

            /** The library string.h provides functions for assignment operation, substring,
            concatenation, string length, string comparison, and whole line input operations,
            to name a few. */


    char one_str[20];          /* Variable one_str has room for up to 19 characters plus the null character */
    //one_str = "Test string";              /* Does not work!! */

    strcpy(one_str, "Test String");         /* Proper way */
    puts(one_str);

    ///#define STRSIZ 15

    char f1[STRSIZ] = "John ";
    printf("%s\n\n", f1);

    char f2[STRSIZ] = "Jacqueline ";
    printf("%s\n\n", f2);

    char last[STRSIZ] = "Kennedy";
    printf("%s\n\n", last);

    strcat(f1, last);           /** Performs concatenation of 2 strings to "John Kennedy" */
    printf("%s\n\n", f1);

    //strcat(f2, last);         /** overflow of f2 for "JacquelineKennedy" */

    strncat(f2, last, 3);       /** "Jacqueline Ken" <-- String size is only 15, so 14 characters allowed + null (\0) */
    printf("%s\n\n", f2);       /** 14 characters + null = 15 characters */
}

void Q6(void)
{
    /** This code fragment displays the numbers 8 and 16 followed by the phrase Jupiter Symphony */

    ///#define SIZE 20

    char s1[SIZE] = "Jupiter ";
    char s2[SIZE] = "Symphony";

    printf("%d\n", strlen(s1));                     /** prints string length as an integer (8) */

    printf("%d\n", strlen(strcat(s1, s2)));         /** concatenates and prints string length of strings s1 and s2 (16) */

    printf("%s\n", s1);                             /** prints the concatenated string of (strcat(s1, s2)) */

}

void Q7(void)
{
    char str1[20], str2[20], str3[20], str4[20], str5[20], str6[20];

    strcpy(str1, "This is a test");
    strcpy(str2, "This is also a test");

    printf("%s %s\n\n", str1, str2);
    printf("strcmp output = %d\n\n", strcmp(str1, str2));

    strcpy(str3, "Test");
    strcpy(str4, "Test");

    printf("%s %s\n\n", str3, str4);
    printf("strcmp output = %d\n\n", strcmp(str3, str4));

    strcpy(str5, "Another Test");
    strcpy(str6, "Anoth");

    printf("%s %s\n\n", str5, str6);
    printf("strcmp output = %d\n\n", strcmp(str5, str6));

}

void Q8(void)
{

    char ch1 = 'Q';             /// character, Use with <ctype.h> library functions

    char ch2[] = "Q";           /// string, use with <string.h> library functions

    char c;

    printf("Enter character: ");
    c = getchar();

    printf("Character entered: ");
    putchar(c);
}

void Q9(void)
{

    plate(9);
    starts_with_X();

}

void starts_with_X(void)
{
    char letter;
    char word[56] = "\0";
    char message[26] = " starts with the letter ";
    char phrase[55] = "\0";

    printf("Enter 1 word < 25 characters, or \'#\' to exit:\n");
    //fgets(word, sizeof(word), stdin);                         // doesn't produce correct output.
    //gets(word);                                               // doesn't produce correct output.
    //scanf("%s", word);                                          // only way to produce correct output.
    line();

    letter = word[0];

    while (letter != '#')
        {

            strcat(word, message);
            strcat(phrase, word);
            phrase[strlen(phrase)] = letter;
            phrase[strlen(phrase)] = '\0';
            puts(phrase);
            line();
            starts_with_X();
        }
}