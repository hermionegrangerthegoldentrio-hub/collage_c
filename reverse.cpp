//WAP in C to reverse a string without using strrev() library function .
#include <stdio.h>
#include <string.h>
void reverseString(char str[]);
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    reverseString(str);
    printf("Reversed string = %s\n", str);
    return 0;
}
void reverseString(char str[])
{
    int left = 0, right = strlen(str) - 1;
    char temp;
    while(left < right)
    {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}
