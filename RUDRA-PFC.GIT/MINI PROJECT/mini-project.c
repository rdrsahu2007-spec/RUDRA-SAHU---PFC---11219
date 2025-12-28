/*
Question:
Digital Root Calculator

Write a program to reduce a given number to a single digit.
Use a loop to extract digits and sum them.
If the sum is greater than 9, repeat the process.
Continue until a single digit remains.
*/

#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 9) {
        sum = 0;
        while (n > 0) {
            sum = sum + (n % 10);
            n = n / 10;
        }
        n = sum;
    }

    printf("Digital Root = %d", n);
    return 0;
}
