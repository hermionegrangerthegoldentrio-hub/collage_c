//WAP to calculate the factorial of an integer using recursion.
#include <stdio.h>
long factorial(int n);
int main()
{
    int n;
    long result;
    printf("Enter an integer: ");
    scanf("%d", &n);
    result = factorial(n);
    printf("Factorial = %ld\n", result);
    return 0;
}
long factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
