#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  LEAP_NUMBER = 1460;

int main(int argc, char **argv)
{
    int diggy_days;

    printf("Enter the number of days: ");
    scanf("%d", &diggy_days);

    if (diggy_days > LEAP_NUMBER)
    {
        int sub_days = diggy_days / LEAP_NUMBER;
        diggy_days = diggy_days - sub_days;
        int years = diggy_days / 365;
        int weeks = (diggy_days % 365) / 7;
        int days = (diggy_days % 365) % 7;
        printf("%d years, %d weeks, %d days\n", years, weeks, days);
        return 0;
    }
    else
    {
       int years = diggy_days / 365;
        int weeks = (diggy_days % 365) / 7;
        int days = (diggy_days % 365) % 7;
        printf("%d years, %d weeks, %d days\n", years, weeks, days); 
        return 0;
    }
}