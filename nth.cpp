//WAP in C to find the n th term of the A.P. series 1,3,5,7,…
#include <stdio.h>
int nthTerm(int n);
int main()
{
    int n, term;
    printf("Enter n: ");
    scanf("%d", &n);
    term = nthTerm(n);
    printf("The %dth term of the series is %d\n", n, term);
    return 0;
}
int nthTerm(int n)
{
    int a = 1, d = 2, term;
    term = a + (n - 1) * d;
    return term;
}
