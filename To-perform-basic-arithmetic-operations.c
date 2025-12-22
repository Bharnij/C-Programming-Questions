/* Write a program in C to perform basic arithmetic operations */


#include <stdio.h>

int main(){
    
    int a, b, sum, diff, prod, div, operators;

    printf("Enter the first number : ");
    scanf("%d", &a);

    printf("Enter the second number : ");
    scanf("%d", &b);

    printf("Choose the operator - ");
    printf("\n 1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n");
    scanf("%d", &operators);

    switch (operators) {
       
        case 1:
            sum = a + b;
            printf("The sum of %d and %d is %d\n", a, b, sum);
            break;
        
        case 2:
            diff = a - b;
            printf("The difference between %d and %d is %d\n", a, b, diff);
            break;

        case 3:
            prod = a * b;
            printf("The product of %d and %d is %d\n", a, b, prod);
            break;

        case 4:
            if (b != 0) {
                div = a / b;
                printf("The division of %d by %d gives %d\n", a, b, div);
            } else {
                printf("Please check again. A number can't be divided by 0\n");
            }
            break;

        default:
            printf("Please recheck and select the valid operator.\n");

    }

    return 0;
}