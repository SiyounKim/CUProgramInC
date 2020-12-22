/*
    Created by Siyoun Kim on 07/08/2020
*/
#include <stdio.h>

int main() {
    int multarr[12][12];
    int x=0;

    printf("enter the length of multidimensional array:");
    scanf("%d", &x);

    for (int i=0; i<x; i++){
        for (int j=0; j<x; j++)
        {
            multarr[i][j] = (j+1) * (j+1);
            printf("%d  ", multarr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
