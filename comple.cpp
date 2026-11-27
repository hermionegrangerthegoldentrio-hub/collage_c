//Write a program to find out the 2's complement of a number and store it in another variable.
#include <stdio.h>
#include <string.h>
void onesComplement(char binary[], char complement[]);
void addOne(char complement[], char twosComplement[]);
int main()
{
    char binary[20], complement[20], twosComplement[20];
    printf("Enter a binary number: ");
    scanf("%s", binary);
    onesComplement(binary, complement);
    addOne(complement, twosComplement);
    printf("2's Complement = %s\n", twosComplement);
    return 0;
}
void onesComplement(char binary[], char complement[])
{
    int i, len = strlen(binary);
    for(i = 0; i < len; i++)
    {
        if(binary[i] == '0')
            complement[i] = '1';
        else
            complement[i] = '0';
    }
    complement[len] = '\0';
}
void addOne(char complement[], char twosComplement[])
{
    int len = strlen(complement);
    int i, carry = 1;
    strcpy(twosComplement, complement);
    for(i = len - 1; i >= 0; i--)
    {
        if(twosComplement[i] == '1' && carry == 1)
        {
            twosComplement[i] = '0';
        }
        else if(twosComplement[i] == '0' && carry == 1)
        {
            twosComplement[i] = '1';
            carry = 0;
            break;
        }
    }
}
