#include <stdio.h>

int main()
{
    int x,max=0,frequency=0,i,key;
    float average, sum=0;
    int A[10];
    printf ("Enter array elements:-\n");
    for (i=0;i<10;i++)      //user input
    {
        printf("Element %d : ",i+1);
        scanf("%d",&A[i]);
    }
    printf("Enter element to check frequency : ");
    scanf("%d",&key);
    printf ("Array : \n");
    int min = A[0];
    for (i=0;i<10;i++)      
    {
        printf("%d ",A[i]);
        if (A[i]>max) {max=A[i];}
        if (A[i]<min) {min=A[i];}
        sum= sum + A[i];
        if (A[i]==key) {frequency ++;}
    }
    average = sum/10;
    printf("\nMaximum element in the array is %d.",max);
    printf("\nMinimum element in the array is %d.",min);
    printf("\nFrequency of %d in the array is %d.",key,frequency);
    printf("\nAverage of the elements in the array is %f.",average);
    return 0;
}