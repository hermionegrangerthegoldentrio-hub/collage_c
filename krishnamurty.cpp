//WAP in c to check weather a number is krisnamurty number or not
#include <stdio.h>
void krisnamurty(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    krisnamurty(n);
    return 0;
}
void krisnamurty(int n){
	int temp, digit, i, fact, sum = 0;
	temp = n;
    while(n > 0)
    {
        digit = n % 10;
        fact = 1;
        for(i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if(sum == temp)
        printf("%d is a Krishnamurthy number.", temp);
    else
        printf("%d is not a Krishnamurthy number.", temp);
}

