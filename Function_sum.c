#include <stdio.h>

int sum (int, int);
int sum (int x, int y)
{
    return x+y;
}
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("Ther sum of two numbers is %d.", sum(a,b));
    return 0;
}