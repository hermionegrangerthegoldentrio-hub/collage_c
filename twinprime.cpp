//Find the twin primes up to a certain range. (Twin primes mean two successive primes. Example: {3,5} but not {7,9})
#include <stdio.h>
int isPrime(int x);
int main()
{
    int n, i;
    printf("Enter the range: ");
    scanf("%d", &n);
    printf("Twin primes up to %d are:\n", n);
    for(i = 2; i <= n - 2; i++)
    {
        if(isPrime(i) && isPrime(i + 2))
            printf("{%d, %d}\n", i, i + 2);
    }
    return 0;
}
int isPrime(int x)
{
    int i;
    if(x < 2)
        return 0;
    for(i = 2; i * i <= x; i++)
    {
        if(x % i == 0)
            return 0;
    }
    return 1;
}
