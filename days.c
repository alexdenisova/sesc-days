#include <stdio.h>

int main()
{
    int days;
    scanf("%i", &days);
    int years = days/365;
    int weeks = (days - years*365)/7;
    int remdays = (days - years*365 - weeks*7);
    printf("years: %i\nweeks: %i\ndays: %i\n", years, weeks, remdays);
}