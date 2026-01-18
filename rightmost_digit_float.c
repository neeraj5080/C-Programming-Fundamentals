// Program: Rightmost Digit of Integral Part of a Float
// Description: This program prints the rightmost digit of the integral part of a floating-point number.

#include <stdio.h>

int main() {
    float n;
    scanf("%f", &n);

    int integerPart = (int)n;
    int digit = integerPart % 10;

    if (digit < 0)
        digit = -digit;

    printf("%d\n", digit);

    return 0;
}
