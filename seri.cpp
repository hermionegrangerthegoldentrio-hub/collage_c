//WAP to compute the sum of the first n terms of the following series S =1-2+3-4+5-6+7…
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
    int sum = 0, i;
    for(i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
            sum = sum + i;
        else
            sum = sum - i;
    }
    return sum;
}
