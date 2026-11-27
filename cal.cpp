//WAP to build a simple calculator that can perform addition, subtraction, multiplication, division, power, and modulus of two numbers
#include <stdio.h>
#include <math.h>

void calculate(float a, float b, int choice);

int main()
{
    float a, b;
    int choice;

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n");
    printf("4. Division\n5. Power\n6. Modulus\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    calculate(a, b, choice);

    return 0;
}

void calculate(float a, float b, int choice)
{
    float result;

    switch(choice)
    {
        case 1:
            result = a + b;
            printf("Result = %.2f\n", result);
            break;

        case 2:
            result = a - b;
            printf("Result = %.2f\n", result);
            break;

        case 3:
            result = a * b;
            printf("Result = %.2f\n", result);
            break;

        case 4:
            if(b != 0)
            {
                result = a / b;
                printf("Result = %.2f\n", result);
            }
            else
                printf("Error: Division by zero\n");
            break;

        case 5:
            result = pow(a, b);
            printf("Result = %.2f\n", result);
            break;

        case 6:
            result = fmod(a,b);
            printf("Result = %.2f\n", result);
            break;

        default:
            printf("Invalid choice\n");
    }
}
