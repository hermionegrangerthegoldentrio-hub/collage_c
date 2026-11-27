// WAP in C to check whether a number is Kaprekar number or not
#include <stdio.h>
void kaprekar(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    kaprekar(n);
    return 0;
}
void kaprekar(int n)
{
    int square, temp, digits = 0;
    int divisor, left, right;
    square = n * n;
    temp = n;
    while(temp > 0)
    {
        digits++;
        temp = temp / 10;
    }
    divisor = 1;
    while(digits > 0)
    {
        divisor = divisor * 10;
        digits--;
    }
    right = square % divisor;
    left = square / divisor;
    if(left + right == n)
        printf("%d is a Kaprekar number.", n);
    else
        printf("%d is not a Kaprekar number.", n);
}
