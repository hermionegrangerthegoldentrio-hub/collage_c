//WAP in C to multiply two numbers using recursion.
#include <stdio.h>
int mult(int a, int b);
int main()
{
    int a, b, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    result = mult(a, b);
    printf("Product = %d\n", result);
    return 0;
}
int mult(int a, int b)
{
    if(b == 0)
        return 0;
    else
        return a + mult(a, b - 1);
}
