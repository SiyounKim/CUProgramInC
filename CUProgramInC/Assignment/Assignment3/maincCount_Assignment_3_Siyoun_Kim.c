/*
    Created by Siyoun Kim on 7/6/20.
*/
#include <stdio.h>

int main() {

    char string[20];
    int x=0;

    printf("Enter a string:");
    scanf("%s", &string);
        for (int i = 0; string[i]; i++)
        {
            if ((string[i] == 'C') || (string[i] == 'c'))
            {
                x++;
            }
        }
    printf("c appears %d times", x);

    return 0;
}