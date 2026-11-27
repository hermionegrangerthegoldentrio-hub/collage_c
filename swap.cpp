//WAP to exchange (swap) the values of two variables using a third variable and without using the third variable.
#include <stdio.h>
void swapWithThird(int a, int b);
void swapWithoutThird(int a, int b);
int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    swapWithThird(a, b);
    swapWithoutThird(a, b);
    return 0;
}
void swapWithThird(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping using third variable:");
    printf("\na = %d", a);
    printf("\nb = %d", b);
}
void swapWithoutThird(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping without third variable:");
    printf("\na = %d", a);
    printf("\nb = %d", b);
}
