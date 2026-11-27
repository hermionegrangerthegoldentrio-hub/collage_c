//WAP in C that reads a string and counts all occurrences of a particular word.
#include <stdio.h>
#include <string.h>
int countWord(char str[], char word[]);
int main()
{
    char str[200], word[50];
    int count;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the word to search: ");
    scanf("%s", word);
    count = countWord(str, word);
    printf("The word \"%s\" occurs %d time(s)\n", word, count);
    return 0;
}
int countWord(char str[], char word[])
{
    int count = 0;
    char *token;
    char delimiters[] = " ,.\n";
    token = strtok(str, delimiters);
    while(token != NULL)
    {
        if(strcmp(token, word) == 0)
            count++;

        token = strtok(NULL, delimiters);
    }
    return count;
}
