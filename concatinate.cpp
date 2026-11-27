//WAP in C to concatenate two strings without using strcat() library function.
#include <stdio.h>
#include <string.h>
void concatenate(char str1[], char str2[]);
int main()
{
    char str1[200], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    concatenate(str1, str2);
    printf("Concatenated string = %s\n", str1);
    return 0;
}
void concatenate(char str1[], char str2[])
{
    int i, j;
    i = strlen(str1);
    j = 0;
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}
