/*
 written by Siyoun Kim in July 2, 2020
 to print out the relationship between two inputs
*/
#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter a number x and y respectively: \n");
    scanf("%d %d",&x, &y);
    if(x>y){
    printf("x is greater than y");
    }
    else if(x==y){
        printf("x is equal to y");
    }
    else{
        printf("y is greater than x");
    }
    return 0;
}
