//WAP to convert a decimal number into its equivalent binary, octal, and hexadecimal numbers.
#include <stdio.h>
#include <string.h>
void convert(int n, int base, char result[]);
int main()
{
    int n;
    char binary[40], octal[40], hexa[40];
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    convert(n, 2, binary);
    convert(n, 8, octal);
    convert(n, 16, hexa);
    printf("Binary      = %s\n", binary);
    printf("Octal       = %s\n", octal);
    printf("Hexadecimal = %s\n", hexa);
    return 0;
}
void convert(int n, int base, char result[])
{
    char temp[40];
    int i = 0, j = 0, remainder;

    if(n == 0)
    {
        result[0] = '0';
        result[1] = '\0';
        return;
    }
    while(n > 0)
    {
        remainder = n % base;

        if(remainder < 10)
            temp[i] = remainder + '0';
        else
            temp[i] = remainder - 10 + 'A';

        i++;
        n = n / base;
    }
    for(j = 0; j < i; j++)
        result[j] = temp[i - 1 - j];

    result[j] = '\0';
}
