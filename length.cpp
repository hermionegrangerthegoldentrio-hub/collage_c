//WAP in C to find length of a string without using strlen().
#include <stdio.h>
int stringLength(char str[]);
int main()
{
    char str[100];
    int length;
    printf("Enter a string: ");
    scanf("%s", str);
    length = stringLength(str);
    printf("Length of the string = %d\n", length);
    return 0;
}
int stringLength(char str[])
{
    int count = 0;
    while(str[count] != '\0')
        count++;
    return count;
}
