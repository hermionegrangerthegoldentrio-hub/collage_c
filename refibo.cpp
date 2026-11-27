//WAP to find the n th Hemachandra-Fibonacci number using recursion.
#include <stdio.h>
long hemFib(int n);
int main()
{
    int n;
    long result;
    printf("Enter n: ");
    scanf("%d", &n);
    result = hemFib(n);
    printf("The %dth Hemachandra-Fibonacci number is %ld\n", n, result);
    return 0;
}
long hemFib(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return hemFib(n - 1) + hemFib(n - 2);
}
