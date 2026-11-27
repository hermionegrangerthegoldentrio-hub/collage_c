//WAP to find L.C.M and H.C.F of two given integers.
#include <stdio.h>
int hcf(int a, int b);
int lcm(int a, int b);
int main()
{
    int a, b;
    printf("Enter two integers:");
    scanf("%d %d", &a, &b);
    if (a<b){
    	a=a+b;
    	b=a-b;
    	a=a-b;
	}
    printf("HCF = %d\n", hcf(a, b));
    printf("LCM = %d\n", lcm(a, b));
    return 0;
}
int hcf(int a, int b)
{
    int r;
    while (b>0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int lcm(int a, int b)
{
    return (a * b) / hcf(a, b);
}
