// Program: Leap Year Check using Ternary Operator
// Description: This program checks whether a given year is a leap year or not using ternary operator.

#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? printf("%d is a leap year.\n", year) : printf("%d is not a leap year.\n", year);

    return 0;
}
