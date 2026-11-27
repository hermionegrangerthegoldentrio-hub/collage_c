//WAP to find count and print the prime numbers, perfect numbers, Armstrong numbers, and Fibonacci numbers between 1 to 1000. Users must have the choice to select which operation they want to do.
#include <stdio.h>
#include<math.h>
int prime(int n);
int perfect(int n);
int armstrong(int n);
void fibonacci();
int main()
{
    int choice, i, count;
    printf("NUMBER OPERATIONS\n");
    printf("1. Prime Numbers\n");
    printf("2. Perfect Numbers\n");
    printf("3. Armstrong Numbers\n");
    printf("4. Fibonacci Numbers\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    count = 0;
    switch(choice)
    {
        case 1:
            printf("\nPrime numbers between 1 and 1000 are:\n");
            for(i = 1; i <= 1000; i++)
            {
                if(prime(i))
                {
                    printf("%d ", i);
                    count++;
                }
            }
            printf("\nCount = %d", count);
            break;
        case 2:
            printf("\nPerfect numbers between 1 and 1000 are:\n");
            for(i = 1; i <= 1000; i++)
            {
                if(perfect(i))
                {
                    printf("%d ", i);
                    count++;
                }
            }
            printf("\nCount = %d", count);
            break;
        case 3:
            printf("\nArmstrong numbers between 1 and 1000 are:\n");
            for(i = 1; i <= 1000; i++)
            {
                if(armstrong(i))
                {
                    printf("%d ", i);
                    count++;
                }
            }
            printf("\nCount = %d", count);
            break;
        case 4:
        	fibonacci();
        	break;
        default:
            printf("\nInvalid choice!");
    }
    return 0;
}
int prime(int n)
{
    int i;
    if(n < 2)
        return 0;
    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int perfect(int n)
{
    int i, sum = 0;
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum = sum + i;
    }
    if(sum == n)
        return 1;
    return 0;
}
int armstrong(int n)
{
    int original, temp, digit, digits = 0;
    int sum = 0;
    original = n;
    temp = n;
    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }
    temp = n;
    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp = temp / 10;
    }
    return sum == original;
}
void fibonacci()
{
    int a = 0, b = 1, c, i,count=0;
    printf("\nFibonacci numbers between 1 and 1000 are:\n");
    for (i = 1; i <= 1000; i++)
    {
        printf("%d ", a);
        count++;
        c = a + b;
        a = b;
        b = c;
		if(a>1000)
			break;
    }
    printf("\nCount = %d", count);
}
