//WAP in C that checks whether a string is a palindrome or not.
#include <stdio.h>
#include <string.h>
int isPalindrome(char str[]);
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if(isPalindrome(str))
        printf("The string is a Palindrome\n");
    else
        printf("The string is not a Palindrome\n");
    return 0;
}
int isPalindrome(char str[])
{
    int left = 0, right = strlen(str) - 1;
    while(left < right)
    {
        if(str[left] != str[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}
