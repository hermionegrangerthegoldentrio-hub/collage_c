//Write a program, which will convert a number (up to seven digits) into its word form. Example: 1234 will be converted as “One Thousand Three Hundred and Four".
#include <stdio.h>
void numberToWords(long n);
void convertTwoDigit(int num);
char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven",
                 "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen",
                 "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty",
                 "Sixty", "Seventy", "Eighty", "Ninety"};
int main()
{
    long n;
    printf("Enter a number (up to 7 digits): ");
    scanf("%ld", &n);
    if(n == 0)
    {
        printf("Zero\n");
        return 0;
    }
    numberToWords(n);
    printf("\n");

    return 0;
}

void numberToWords(long n)
{
    int lakh, thousand, hundred, remainder;

    lakh = n / 100000;
    n = n % 100000;

    thousand = n / 1000;
    n = n % 1000;

    hundred = n / 100;
    remainder = n % 100;

    if(lakh > 0)
    {
        convertTwoDigit(lakh);
        printf("Lakh ");
    }

    if(thousand > 0)
    {
        convertTwoDigit(thousand);
        printf("Thousand ");
    }

    if(hundred > 0)
    {
        convertTwoDigit(hundred);
        printf("Hundred ");
        if(remainder > 0)
            printf("and ");
    }
    if(remainder > 0)
        convertTwoDigit(remainder);
}
void convertTwoDigit(int num)
{
    if(num < 20)
    {
        printf("%s ", ones[num]);
    }
    else
    {
        printf("%s ", tens[num / 10]);
        if(num % 10 != 0)
            printf("%s ", ones[num % 10]);
    }
}
