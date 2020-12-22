/*
    Created by Siyoun Kim on 7/6/20.
*/
#include <stdio.h>
void main()
{
    int n;

    printf("Enter the value n to find multiplications starting from 1 to n: ");
    scanf("%d",&n);
    printf("Input the number upto: %d\n", n);
    printf("Multiplication table from 1 to %d \n",n);

    for(int i=1; i<=10; i++) // creating 10 tables
    {
        for(int j=1; j<=n; j++) //creating multiplication from 1 to n s`
        {
            if (j<=n-1)// the use of comma from 1 to n-1
                printf("%d x %d = %d, ",j,i,i*j);
            else// the use of period in the end
                printf("%d x %d = %d.",j,i,i*j);
        }
        printf("\n");// line spacing
    }
}