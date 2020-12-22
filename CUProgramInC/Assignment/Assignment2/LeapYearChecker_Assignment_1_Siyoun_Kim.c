/*
 Written by Siyoun Kim in july 2, 2020
 This code is made to print out the input year is whether leap year or not
*/

#include <stdio.h>

int main() {
    int x;
    printf("Enter a year to know whether the year is leap year or not: ");
    scanf("%d", &x);
    // leap year is multiple of 400 --> so the year divide by 400 should not have the remainder
    if (x%400 ==0){
        printf("x year is a leap year", &x);
    }
    // leap year is multiple of 4 --> so the year divide by 4 should not have the remainder
    else if (x%4==0){
        printf("x year is a leap year", &x);
    }
    // But leap  is not multiple of 100 --> so if the year is divisible by 100 then the year is not leap year
    else if (x%100==0){
        printf("x year is not a leap year", &x);
    }
    else
        printf("x year is not a leap year", &x);
    return 0;
}
