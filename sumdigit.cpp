//WAP to find the sum of the digits of an integer.
#include <stdio.h>
int sumDigits(int n);
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Sum of digits = %d", sumDigits(n));
    return 0;
}
int sumDigits(int n)
{
    int sum = 0, digit;
    while (n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    return sum;
}
