// Program: Greatest of Three Numbers using Ternary Operator
// Description: This program finds the greatest among three numbers using ternary operator.

#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int greatest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    printf("%d\n", greatest);

    return 0;
}
