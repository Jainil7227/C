#include <stdio.h>

int main()
{
    int x, fact=1, i;
    printf("Enter the number : ");
    scanf("%d",&x);
    for (i=1;i<=x;i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is : %d",x,fact);
    return 0;
}