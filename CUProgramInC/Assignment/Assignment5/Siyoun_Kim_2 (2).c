/*
    Created by Siyoun Kim on 07/08/2020
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[15];
    int x;

    for(int i = 0; i < 15; i++)
    {
        arr[i] = rand() % 10;
        printf("%d ", arr[i]);
    }
    printf("\nwhich number among the random numbers you want to find: ");
    scanf("%d", &x);
    for(int i = 0; i < 15; i++)
    {
        if(x==arr[i])
        {
            printf("%d(*) ", arr[i]);
        }
        else
            {
            printf("%d ", arr[i]);
            }
    }

    return 0;
}