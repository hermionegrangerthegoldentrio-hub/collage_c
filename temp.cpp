//WAP to convert Fahrenheit temperature into its corresponding Celsius temperature and vice versa. The user must have the choice to decide what they want to do.
#include<stdio.h>
void fahrenheit(float t);
void celsius(float t);
int main(){
    int choice, n=0;
    float temp;
    while(n==0){
	    printf("Temperature Conversion\n");
        printf("1.Convert fahrenheit to celsius\n");
    	printf("2.Convert celsius to fahrenheit\n");
    	printf("Enter your choice(1or2):");
    	scanf("%d",&choice);
        if(choice==1){
            printf("Enter a temp in fahrenheit:");
            scanf("%f",&temp);
            celsius(temp);
            break;
        }
        else if(choice==2){
        	printf("Enter a temp in celsius:");
            scanf("%f",&temp);
            fahrenheit(temp);
            break;
		}
		else{
			printf("wrong choice\n");
		}
	}
	return 0;
}
void celsius(float t){
	float result = (t - 32.0) * 5.0 / 9.0;
	printf("%.2f F = %.2f C\n",t, result);
}
void fahrenheit(float t){
	float result = (t * 9.0 / 5.0) + 32.0;
	printf("%.2f C = %.2f F\n",t, result);
}


