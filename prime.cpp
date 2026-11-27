//WAP to find whether an integer is prime or not.
#include<stdio.h>
#include<math.h>
int prime_check(int n);
int main(){
	int num1,x;
	printf("Enter a num:");
	scanf("%d",&num1);
	if(num1>10 && (num1%(int)sqrt(num1))==0) x=1;
	else x=prime_check(num1);
	if(x==0) printf("%d is a prime number",num1);
	else printf("%d is not a prime number",num1);
	return 0;
}
int prime_check(int n){
	int i,flag=0,r;
	for(i=2;i<=sqrt(n);i++){
		r=n%i;
		if(r==0){
			flag=1;
			break;
		}
	}
	if(flag==0) return 0;
	else return 1;
}
