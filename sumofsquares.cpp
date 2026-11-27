//WAP to find the sum of the series 1^2 + 2^2 + 3^2 + … + N^2. Take N as input from the user.
#include <stdio.h>

long sumOfSquares(int n);

int main()
{
    int n;
    long sum;

    printf("Enter N: ");
    scanf("%d", &n);

    sum = sumOfSquares(n);

    printf("Sum of series = %ld\n", sum);

    return 0;
}

long sumOfSquares(int n)
{
    long sum = 0;
    int i;

    for(i = 1; i <= n; i++)
        sum = sum + (i * i);

    return sum;
}
