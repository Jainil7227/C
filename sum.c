#include <stdio.h>
#include <math.h>
int main()
{
    int n,c,i;
    printf("Enter a number : ");
    scanf ("%d",&n);
    c=n*n;
    printf("Square of the number is : %d\n",c);
    c=sqrt(n);
    printf("Square root of the number is : %d\n",c);
    c=n*n*n;
    printf("Cube of the number is : %d\n",c);
    return 0;
}