#include <stdio.h>
void main()
{
    float x,y,z,max1,max;
    printf("Enter Numer X : ");
    scanf("%f",&x);
    printf("Enter Numer Y : ");
    scanf("%f",&y);
    printf("Enter Numer Z : ");
    scanf("%f",&z);
    max1 = (x>y)?x:y;
    max = (max1>z)?max1:z;
    printf("Max Number  = %.2f",max);
    
}