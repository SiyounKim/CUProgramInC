/*
  created by Siyoun Kim on 07/09/2020
*/
#include <stdio.h>
#include <string.h>

void reverseStr(char *str)
{
    int length;
    char z;

    length = strlen(str);

    char *xptr = str;//the beginning
    char *yptr = xptr +(length - 1); // the end
    
    //i < (length / 2) is when yptr > xptr
    for (int i = 0; i < (length / 2); i++)
    {
        // reversing values of the both pointers
        z = *yptr;
        *yptr = *xptr; //putting the last value of yptr into xptr
        *xptr = z;  //store the xptr value into z so that it goes to yptr when the for loop starts with incremented i
        xptr++;
        yptr--;
    }
}

int main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";

    printf("Input string: %s\n", str1);
    reverseStr(str1);
    printf("Reverse of the string: %s\n", str1);
    printf("Input string: %s\n", str2);
    reverseStr(str2);
    printf("Reverse of the string: %s\n", str2);

    return 0;
}