#include <stdio.h>
int main()
{
    float x,y,z,a;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d",&x,&y,&z);
    a=(x+y+z)/3;
    printf("The average of 3 numbers is %d",a);
    return 0;
}