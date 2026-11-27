//WAP in C to print a normal input string vertically where each character in the output will be in uppercase form. Example: The string “Bat” will be printed as
//B
//A
//T
#include <stdio.h>
void printVertical(char str[]);
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printVertical(str);
    return 0;
}
void printVertical(char str[])
{
    int i = 0;
    char ch;
    while(str[i] != '\0')
    {
        ch = str[i];
        if(ch >= 'a' && ch <= 'z')
            ch = ch - 'a' + 'A';
        printf("%c\n", ch);
        i++;
    }
}
