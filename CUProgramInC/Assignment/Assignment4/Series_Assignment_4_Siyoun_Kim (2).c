/*
    Created by Siyoun Kimon 7/7/20.
*/
#include <stdio.h>
int sumOfTheSeries(int n);
int main()
{
    int n;
    printf("Enter an interger n to find the sum of the series(1^1+2^2+...n^n) : ");
    scanf("%d", &n);

    printf("Sum = %d", sumOfTheSeries(n));
    return 0;
}

int sumOfTheSeries(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += (i * i);
    }
    return sum;
}