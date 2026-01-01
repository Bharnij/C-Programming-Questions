/* Program to swap two numbers using a temporary variable */

#include <stdio.h>

int main(void){

int a,b, temp;

printf("Enter the values of the numbers\n -");
scanf("%d %d", &a, &b);

temp = a;
a = b;
b = temp;

printf("The values of the numbers after swapping are - " "%d %d ", a , b);

return 0;

}