//WAP in C to compare two strings without using strcmp().
#include <stdio.h>
int compareStrings(char str1[], char str2[]);
int main()
{
    char str1[100], str2[100];
    int result;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    result = compareStrings(str1, str2);
    if(result == 0)
        printf("Strings are equal\n");
    else if(result > 0)
        printf("str1 is greater than str2\n");
    else
        printf("str1 is less than str2\n");
    return 0;
}
int compareStrings(char str1[], char str2[])
{
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
            return (str1[i] - str2[i]);

        i++;
    }
    return (str1[i] - str2[i]);
}
