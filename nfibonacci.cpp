//WAP to find the nth Fibonacci number. The value of n must be given as user input.
#include <stdio.h>
int nfibonacci(int n);
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The %dth Fibonacci number is %d", n, nfibonacci(n));
    return 0;
}
int nfibonacci(int n)
{
    int a = 0, b = 1, c, i;
    if (n == 1)
        return a;
    if (n == 2)
        return b;
    for (i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
