// WAP (menu driven) to find whether an integer is completely divisible by 3, 5, 6 and 11 or not, without the use of explicit division by 3, 5, 6 and 11.
#include <stdio.h>
void divisibleby3(int n);
void divisibleby5(int n);
void divisibleby6(int n);
void divisibleby11(int n);
int main()
{
    int n, choice, c=0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("\nMENU\n");
    printf("1. Divisible by 3\n");
    printf("2. Divisible by 5\n");
    printf("3. Divisible by 6\n");
    printf("4. Divisible by 11\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    while(c==0){
    	if (choice == 1)
    	{
        	divisibleby3(n);
        	break;
    	}
    	else if (choice == 2)
    	{
        	divisibleby5(n);
        	break;
    	}
    	else if (choice == 3)
    	{
        	divisibleby6(n);
        	break;
		}
    	else if (choice == 4)
    	{
        	divisibleby11(n);
        	break;
    	}
    	else
    	{
        	printf("Invalid choice!");
    	}
	}
	return 0;
}
void divisibleby3(int n){
	int temp, sum, digit;
	temp = n;
    sum = 0;
    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }
    if (sum % 3 == 0)
        printf("%d is completely divisible by 3.", n);
    else
        printf("%d is not completely divisible by 3.", n);
}
void divisibleby5(int n){
	int digit;
	digit = n % 10;
    if (digit == 0 || digit == 5)
        printf("%d is completely divisible by 5.", n);
    else
        printf("%d is not completely divisible by 5.", n);
}
void divisibleby6(int n){
	int temp, sum, digit;
	temp = n;
    sum = 0;
    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }
	if ((digit = n % 2) == 0 && sum % 3 == 0)
        printf("%d is completely divisible by 6.", n);
    else
        printf("%d is not completely divisible by 6.", n);
}
void divisibleby11(int n){
	int temp, altsum, sum, digit, position = 1;
	temp = n;
	altsum = 0;
    sum = 0;
    while (temp != 0)
    {
        digit = temp % 10;
        if (position % 2 == 0)
            sum = sum + digit;
        else
            altsum = altsum + digit;
        temp = temp / 10;
        position++;
    }
    if ((sum - altsum) % 11 == 0)
        printf("%d is completely divisible by 11.", n);
    else
        printf("%d is not completely divisible by 11.", n);
}
