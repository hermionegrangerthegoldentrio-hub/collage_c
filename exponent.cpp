//WAP find the value of a^b, without using a library function. The values of a and b must be integers.
#include <stdio.h>
void exponent(int x,int y);
int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    exponent(a,b);
    return 0;
}
void exponent(int x,int y){
	int i, result = 1;
	for (i = 1; i <= y; i++)
    {
        result = result * x;
    }
    printf("%d^%d = %d", x, y, result);
}
