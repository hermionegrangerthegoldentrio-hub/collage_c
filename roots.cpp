//WAP to find the roots of a given quadratic equation.
#include <stdio.h>
#include <math.h>
void findRoots(float a, float b, float c);
int main()
{
    float a, b, c;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    findRoots(a, b, c);
    return 0;
}
void findRoots(float a, float b, float c)
{
    float d, x1, x2, realPart, imagPart;
    d = b * b - 4 * a * c;
    if(d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    else if(d == 0)
    {
        x1 = x2 = -b / (2 * a);
        printf("Roots are real and equal\n");
        printf("x1 = x2 = %.2f\n", x1);
    }
    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("Roots are complex\n");
        printf("x1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("x2 = %.2f - %.2fi\n", realPart, imagPart);
    }
}
