//Write a program to find the highest of three numbers.
#include <stdio.h>
int highest(int a, int b, int c);
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Highest number = %d\n", highest(a, b, c));
    return 0;
}
int highest(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}
