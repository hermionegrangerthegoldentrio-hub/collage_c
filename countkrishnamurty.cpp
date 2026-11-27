//WAP in C to count and print the number of krishnamurti number in a given range
#include <stdio.h>
int krisnamurthy(int n);
int main()
{
    int start, end, i, count = 0;
    printf("Enter the starting value: ");
    scanf("%d", &start);
    printf("Enter the ending value: ");
    scanf("%d", &end);
    printf("Krishnamurthy numbers are: ");
    for(i = start; i <= end; i++)
    {
        if(krisnamurthy(i))
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nCount = %d", count);
    return 0;
}
int krisnamurthy(int n)
{
    int temp, digit, i, fact, sum = 0;
    temp = n;
    while(n > 0)
    {
        digit = n % 10;
        fact = 1;
        for(i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if(sum == temp)
        return 1;
    else
        return 0;
}
