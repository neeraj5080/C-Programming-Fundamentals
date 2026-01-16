// Program: Reverse and Palindrome Check
// Description: This program finds the reverse of a number and checks if it is a palindrome.

#include <stdio.h>

int main() {
    int n, rev = 0, temp;

    scanf("%d", &n);

    temp = n;

    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }

    if (temp == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
