/*
    Created by Siyoun Kim on 07/09/2020
*/
#include<stdio.h>
void strcat(char*, char*); 
int stcmp(char *p, char *q);

int main()
{
    char str1[50];
    char str2[50];
    int x;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    x = stcmp(str1, str2);
    if(x==0)
    {
        printf("Both strings are same\n");
    }
    else
    {
        printf("Both strings are not same\n");
    }
    strcat(str1, str2);
    printf("The concatenation of str 1 and str2 is %s\n", str1);
    return 0;
}

int stcmp(char *str1, char *str2)
{
    while (*str1 == *str2)
    {
        if (*str1 == '\0' || *str2 == '\0')
        {
            break;
        }
        str1++;
        str2++;// Returns positive number
    }
    if (*str1 == '\0' && *str1 == '\0') {
        return 0;
    }
    else
    {
        return -1;// Returns negative number
    }
}

void strcat(char *str1, char *str2)
{
    while(*str1!='\0')
    {
        str1++;
    }
    while(*str2!='\0')
    {
        *str1 = *str2;
        str2++;
        str1++;
    }
    *str1 = '\0';
}