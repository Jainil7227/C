#include <stdio.h>

int main ()
{
    float x,y,z;      // z=percentage
    printf("Enter total marks : ");
    scanf("%f",&x);
    printf("Enter obtained marks : ");
    scanf ("%f",&y);
    z=(y/x)*100;
    printf("You have obtained %f in your exam.\n",z);
    if (z>75) {printf("Distinguished!!");}
    else if (z>=60 && z<75) {printf("First Devision");}
    else if (z>=50 && z<60) {printf("Second Devision");}
    else if (z>=40 && z<50) {printf("Third Devision");}
    else {printf("Failed");}
    return 0;
}