/*
 written by Siyoun Kim in July 2, 2020
 This code is made to print out the relationship between two inputs
*/
#include <stdio.h>

int main() {
    char op;// operator
    float x, y; // inputs
    printf("Enter a number of x and an operator (+, -, *, /, %) and then enter y to calculate the relationship between x and y: \n");
    scanf("%f %c  %f", &x, &op, &y);

    switch (op) {
        case '+':
            printf("%f + %f = %f", x, y, x + y);
            break;
        case '-':
            printf("%f - %f = %f", x, y, x - y);
            break;
        case '*':
            printf("%f * %f = %f", x, y, x * y);
            break;
        case '/':
            printf("%f / %f = %f", x, y, x / y);
        case '%':
            printf("Remainder when %f divided by %f = %d", x, y, (int)x % (int)y); //used casting to int
            break;
        // if the user put input incorrectly
        default:
            printf("invalid inputs, please re-try the program with proper inputs");
    }

    return 0;
}