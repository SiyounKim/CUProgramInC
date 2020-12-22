/*
    Created by Siyoun Kim on 07/08/2020
*/
#include <stdio.h>

int main() {
    int n=0;
    int count =0;
    int arr[count];
    printf("enter the size of array: ");
    scanf("%d",&n);

    for (int i=0;i<n;i++)
    {
        printf("enter the elements of array: ");
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
