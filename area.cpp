//WAP to find the area of a triangle, circle, and right-angled triangle. Users must be able to input their choice.
#include <stdio.h>
#include <math.h>
float triangleArea(float a, float b, float c);
float circleArea(float r);
float rightTriangleArea(float base, float height);
int main()
{
    int choice;
    float a, b, c, r, base, height, area;
    printf("MENU\n 1. Triangle\n 2. Circle\n 3. Right-angled Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("Enter three sides a, b, c: ");
            scanf("%f %f %f", &a, &b, &c);
            area = triangleArea(a, b, c);
            printf("Area of Triangle = %.2f\n", area);
            break;
        case 2:
            printf("Enter radius: ");
            scanf("%f", &r);
            area = circleArea(r);
            printf("Area of Circle = %.2f\n", area);
            break;
        case 3:
            printf("Enter base and height: ");
            scanf("%f %f", &base, &height);
            area = rightTriangleArea(base, height);
            printf("Area of Right-angled Triangle = %.2f\n", area);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
float triangleArea(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
float circleArea(float r)
{
    return 3.14159 * r * r;
}
float rightTriangleArea(float base, float height)
{
    return 0.5 * base * height;
}
