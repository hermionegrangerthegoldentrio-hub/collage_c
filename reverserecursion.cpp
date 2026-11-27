//WAP in C to reverse a given number using recursion.
#include <stdio.h>
#include <math.h>
int countDigits(int n);
int reverse(int n, int digits);
int main()
{
    int n, result, digits;
    printf("Enter a number: ");
    scanf("%d", &n);
    digits = countDigits(n);
    result = reverse(n, digits);
    printf("Reversed number = %d\n", result);
    return 0;
}
int countDigits(int n)
{
    if(n == 0)
        return 0;
    else
        return 1 + countDigits(n / 10);
}
int reverse(int n, int digits)
{
    if(n == 0)
        return 0;
    else
        return (n % 10) * (int)pow(10, digits - 1) + reverse(n / 10, digits - 1);
}
