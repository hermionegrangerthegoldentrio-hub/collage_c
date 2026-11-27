//WAP to count the number of digits in a given integer.
#include <stdio.h>
int countDigits(int n);
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Number of digits = %d", countDigits(n));
    return 0;
}
int countDigits(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}
