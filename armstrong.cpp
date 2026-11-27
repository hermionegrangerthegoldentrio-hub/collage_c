//WAP to find whether a number is Armstrong or not.
#include <stdio.h>
#include <math.h>
int armstrong(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (armstrong(n))
        printf("%d is an Armstrong Number.", n);
    else
        printf("%d is not an Armstrong Number.", n);
    return 0;
}
int armstrong(int n)
{
    int original, temp, digit, digits = 0;
    int sum = 0;
    original = n;
    temp = n;
    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }
    temp = n;
    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp = temp / 10;
    }
    return sum == original;
}
