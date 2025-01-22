#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number : ");
    scanf ("%d",&x);
    if (x%4==0)
    {
        printf("%d can be a leap year.",x);
    }
    else {printf("%d cannot be a leap year.",x);}
    return 0;
}