/*
    Created by Siyoun Kim on 07/15/2020
*/
#include<stdio.h>
#include<math.h> // this library is used to utilize sqrt to calculate the Standard Deviation
int main()
{
    FILE *fptr;
    double data[11];
    double sum=0, mean, var; //var is variance
    fptr = fopen("/Users/siyounkim/CLionProjects/untitled33/SampleInput_FileIO.txt", "r");
    //read the floats from the SampleInput_FileIO.txt
    for(int i = 0; i < 11; i++)
    {
        fscanf(fptr, "%lf", &data[i]);
    }
    fclose(fptr);// stored the float values as an array
    //finding the mean
    for(int i=0;i<11;i++)
    {
        sum += data[i];
    }
    mean=sum/11;
    sum=0;// reset the sum to 0 for the next for loop
    //finding the variance
    for(int i=0;i<11;i++)
    {
        sum += (data[i] - mean) * (data[i] - mean);
    }
    var= sum/(11); //11 is from (n-1)
    
    printf("Mean is <%lf>.\n", mean);
    printf("Standard Deviation is <%lf>.\n", sqrt(var));//sqrt of variance is the standard deviation
    //create an text file to output the result.
    fptr = fopen("SampleOutput_FileIO.txt", "w");
    fprintf(fptr,"Mean is <%lf>.\n", mean);
    fprintf(fptr,"Standard Deviation is <%lf>.\n", sqrt(var));//sqrt of variance is the standard deviation
    fclose(fptr);
    return 0;
}
