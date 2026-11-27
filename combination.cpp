//WAP to find the value of n C r and n P r . Input n and r.
#include <stdio.h>
long factorial(int x);
int main()
{
    int n, r;
    long nPr, nCr;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    nPr = factorial(n) / factorial(n - r);
    nCr = factorial(n) / (factorial(r) * factorial(n - r));
    printf("nPr = %ld\n", nPr);
    printf("nCr = %ld\n", nCr);
    return 0;
}
long factorial(int x)
{
    long fact = 1;
    int i;
    for(i = 1; i <= x; i++)
        fact = fact * i;
    return fact;
}
