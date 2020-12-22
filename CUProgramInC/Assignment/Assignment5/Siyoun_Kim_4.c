#include <stdio.h>

int main()
{
    int x, y, a[100][100], b[100][100], sum[100][100];

    printf("Enter the number of row: ");
    scanf("%d", &x);
    printf("Enter the number of column: ");
    scanf("%d", &y);

    printf("already exist matrix:\n");
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j]=1;
            printf("%d  ", a[i][j]);

        }
        printf("\n");
    }

    for (int i = 0; i < x; ++i)
        for (int j = 0; j < y; ++j) {
           b[i][j]=1;
        }

    for (int i = 0; i < x; ++i)
        for (int j = 0; j < y; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }

    printf("The simplified array: \n");
    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            printf("%d  ", sum[i][j]);
        }
        printf("\n");

    }

    return 0;
}