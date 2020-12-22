/*
    Created by Siyoun on 07/08/2020
*/

#include <stdio.h>
int main() {
    char string1[20], string2[20];
    int count = 0;

    printf("Enter the first string : ");
    scanf("%s", string1);
    printf("Enter the second string: ");
    scanf("%s", string2);

    for (int i = 0; string1[i] != '\0'; i++) //string1[i] != '\0' means string1[i] is not '\0'
    {
        count ++;
    }
    for (int j = 0; string2[j] != '\0'; count++)
    {
        j++;
        string1[count] = string2[j];
    }

    printf("Concatenated string is %s\n", string1);

  return 0;
}
