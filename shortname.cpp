//Write a program, which will ask to enter a full name, and it will display as an appropriate short form. Example: Input – Mr. Pinaki Ranjan Sinha Output – Mr. P. R. Sinha.
#include <stdio.h>
#include <string.h>
void shortForm(char name[]);
int main()
{
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  
    shortForm(name);
    return 0;
}
void shortForm(char name[])
{
    char *words[10];
    char temp[100];
    int count = 0, i;
    char *token;
    strcpy(temp, name);
    token = strtok(temp, " ");
    while(token != NULL)
    {
        words[count] = token;
        count++;
        token = strtok(NULL, " ");
    }
    printf("%s ", words[0]);
    for(i = 1; i < count - 1; i++)
    {
        printf("%c. ", words[i][0]);
    }
    printf("%s\n", words[count - 1]);
}
