//WAP to find the sum of the series 1/1! + 2/2! + 3/3! +…. + N/N!. Take N as input from the user.
#include <stdio.h>
long factorial(int x);
float sumSeries(int n);
int main()
{
    int n;
    float sum;
    printf("Enter N: ");
    scanf("%d", &n);
    sum = sumSeries(n);
    printf("Sum of series = %.4f\n", sum);
    return 0;
}
float sumSeries(int n)
{
    float sum = 0, term;
    int i;
    for(i = 1; i <= n; i++)
    {
        term = (float)i / factorial(i);
        sum = sum + term;
    }
    return sum;
}
long factorial(int x)
{
    long fact = 1;
    int i;
    for(i = 1; i <= x; i++)
        fact = fact * i;
    return fact;
}
