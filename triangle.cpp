//Write a program to read three positive numbers A, B, and C to determine whether the numbers can form the sides of a triangle. If yes, determine whether the triangle is an acute-angled triangle. Determine in addition whether an equilateral triangle or an isosceles triangle.
#include <stdio.h>
void checkTriangle(float a, float b, float c);
int main()
{
    float a, b, c;
    printf("Enter three sides A, B, C: ");
    scanf("%f %f %f", &a, &b, &c);
    checkTriangle(a, b, c);
    return 0;
}
void checkTriangle(float a, float b, float c)
{
    float temp, asq, bsq, csq;
    if((a + b > c) && (b + c > a) && (a + c > b))
    {
    	printf("The sides can form a triangle\n");
        if(a > c) { temp = a; a = c; c = temp; }
        if(b > c) { temp = b; b = c; c = temp; }
        asq = a * a;
        bsq = b * b;
        csq = c * c;
        if(asq + bsq > csq)
            printf("Acute-angled triangle\n");
        else if(asq + bsq == csq)
            printf("Right-angled triangle\n");
        else
            printf("Obtuse-angled triangle\n");
        if(a == b && b == c)
            printf("Equilateral triangle\n");
        else if(a == b || b == c || a == c)
            printf("Isosceles triangle\n");
        else
            printf("Scalene triangle\n");
    }
    else
    {
        printf("The sides do not form a triangle\n");
    }
}
