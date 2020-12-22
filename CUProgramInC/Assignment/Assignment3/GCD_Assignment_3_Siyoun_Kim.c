/*
    Created by Siyoun Kim on 7/6/20.
    G.C.D is the largest positive integer that divides all of the integers
    (1) so that the program should be run until it finds gcd
*/
#include <stdio.h>
int main()
{
    int x, y, gcd;

    printf("Enter two integers x and y respectively to find G.C.D: ");
    scanf("%d %d", &x, &y);

    for(int i=1; i <= x && i <= y; ++i) //(1)
    {
        if(x%i==0 && y%i==0)   // finding the first factor of both x and y
            gcd = i;
    }
    printf("G.C.D of %d(x) and %d(y) is %d", x, y, gcd);

    return 0;
}