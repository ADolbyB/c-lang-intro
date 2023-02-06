/**
Joel Brigida
SI Session 3/05/2020
*/

#include <stdio.h>
#include <stdlib.h>

void new_line(void);
void Q1(void);
void Q2(void);
void Q3(void);

int main()
{

    //Q1();
    //Q2();
    Q3();

    return 0;
}

void new_line(void)
{
    printf("\n");
}

void Q1(void)
{
    int age;        // age of applicant
    char sts;       // Senior status - working or retired

    printf("Please enter your age: ");
    scanf(" %d", &age);

    if (age > 59)
    {
        new_line(), printf("Please enter your status (W or R): ");
        scanf(" %c", &sts);
        if (sts == 'W' || sts == 'w')
            new_line(), printf("Working Senior");
        else if (sts == 'R' || sts == 'r')
            new_line(), printf("Retired Senior");
        else
            new_line(), printf("INVALID ENTRY");
    }
    else if (age > 20)
        new_line(), printf("Adult");
    else if (age > 12)
        new_line(), printf("Teen");
    else
        new_line(), printf("Child");
}

void Q2(void)
{
    int weekday;

    printf("Please enter an integer 0 - 6 for Weekday: ");
    scanf("%d", &weekday);
    new_line();

    switch(weekday)
    {
    case 0:
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    default:
        printf("DANGER WILL ROBINSON!! NOT A WEEKDAY!!");
    }
}

void Q3(void)
{
    int wind_speed;

    printf("Please enter the wind speed in mph: ");
    scanf("%d", &wind_speed);

    if (wind_speed < 25)
        new_line(), printf("Not a strong winds. Carry On!!");
    else if (wind_speed < 38 && wind_speed >= 25)
        new_line(), printf("Strong winds. Be careful.");
    else if (wind_speed < 54 && wind_speed >= 38)
        new_line(), printf("Gale force winds. Use caution.");
    else if (wind_speed < 72 && wind_speed >= 54)
        new_line(), printf("Tropical Storm Force winds. Warning!!");
    else if (wind_speed >= 72)
        new_line(), printf("Hurricane force winds!! BATTON DOWN THE HATCHES!!");
}