/*
    Created by Siyoun Kim on 7/7/20.
*/
#include<stdio.h>
#include "NumbersExtended_Siyoun_Kim.h"

// declaring the recursive function
int isPrime(int, int);
int sumOfDigits(int);

int main() {
    int x, y, sum;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = difPrime(x, x / 2);
    sum = sumOfDigits(x);

    if (y == 1) {
        printf("%d is a prime number\n", x);
    } else {
        printf("%d is a Composite number\n", x);
    }
    printf("Sum of the digits = %d", sum);

    return 0;
}