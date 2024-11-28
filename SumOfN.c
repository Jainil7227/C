#include <stdio.h>

int main()
{
    int x, sum=0,i;
    printf("Sum of numbers till : ");
    scanf ("%d",&x);
    for (i=1;i<=x;i++)
    {
        sum = sum + i;
    }
    printf ("Sum of numbers is : %d",sum);
    return 0;
}