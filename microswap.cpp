//Write a macro that swaps two numbers. WAP to use it.
#include <stdio.h>
#define SWAP(a, b, temp) { temp = a; a = b; b = temp; }
int main()
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a = %d, b = %d\n", a, b);
    SWAP(a, b, temp);
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
