//WAP in C to compute the sum of the first n terms (n&gt;=1) of the following series:1-3+5-7+9-…
#include <stdio.h>
int seriesSum(int n);
int main()
{
    int n, sum;
    printf("Enter n: ");
    scanf("%d", &n);
    sum = seriesSum(n);
    printf("Sum of series = %d\n", sum);
    return 0;
}
int seriesSum(int n)
{
    int sum = 0, term, i;
    for(i = 1; i <= n; i++)
    {
        term = 2 * i - 1;
        if(i % 2 != 0)
            sum = sum + term;
        else
            sum = sum - term;
    }
    return sum;
}
