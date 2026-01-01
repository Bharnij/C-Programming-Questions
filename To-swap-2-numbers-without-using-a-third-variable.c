/* Program to swap two numbers without using a third variable */

#include <stdio.h>

int main(void) {

int a, b;

printf("Enter the two numbers to swap - ");
scanf("%d %d", &a, &b);

a = a-b;
b = a-b;
a = a+b;

printf("After swapping the numbers are - %d %d\n", &a, &b);

return 0;

}