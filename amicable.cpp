//Write a program in C to find whether a pair of numbers is AMICABLE or not. A pair of numbers is said to bamicable if the sum of the factors of the 1st number equals the 2nd number, and the sum of the factors of the 2nd number equals the 1st number. (e.g., 220 and 284)
#include <stdio.h>
int sumOfDivisors(int x);
int main()
{
    int a, b, sumA, sumB;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sumA = sumOfDivisors(a);
    sumB = sumOfDivisors(b);
    if(sumA == b && sumB == a)
        printf("%d and %d are Amicable numbers\n", a, b);
    else
        printf("%d and %d are not Amicable numbers\n", a, b);
    return 0;
}
int sumOfDivisors(int x)
{
    int sum = 0, i;
    for(i = 1; i <= x / 2; i++)
    {
        if(x % i == 0)
            sum = sum + i;
    }
    return sum;
}
