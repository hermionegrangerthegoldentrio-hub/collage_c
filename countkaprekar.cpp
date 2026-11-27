// WAP in C to count and print the number of Kaprekar numbers in a given range
#include <stdio.h>
int kaprekar(int n);
int main()
{
    int start, end, i, count = 0;
    printf("Enter the starting value: ");
    scanf("%d", &start);
    printf("Enter the ending value: ");
    scanf("%d", &end);
    printf("Kaprekar numbers are: ");
    for(i = start; i <= end; i++)
    {
        if(kaprekar(i))
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nCount = %d", count);
    return 0;
}
int kaprekar(int n)
{
    int square, temp, digits = 0;
    int divisor = 1, left, right;
    square = n * n;
    temp = n;
    while(temp > 0)
    {
        digits++;
        temp = temp / 10;
    }
    while(digits > 0)
    {
        divisor = divisor * 10;
        digits--;
    }
    right = square % divisor;
    left = square / divisor;

    if(left + right == n)
        return 1;
    else
        return 0;
}
