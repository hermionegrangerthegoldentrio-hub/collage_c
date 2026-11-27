//WAP in C to find the radian equivalent of a given degree of an angle.
#include <stdio.h>
#define PI 3.14159265
float degreeToRadian(float degree);
int main()
{
    float degree, radian;
    printf("Enter angle in degrees: ");
    scanf("%f", &degree);
    radian = degreeToRadian(degree);
    printf("Angle in radians = %.4f\n", radian);
    return 0;
}
float degreeToRadian(float degree)
{
    float radian;
    radian = degree * (PI / 180);
    return radian;
}
