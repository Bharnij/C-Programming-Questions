/* Write a program in C to find the sum and 
average of any 5 numbers , take input from the user*/

#include <stdio.h>

int main(){
    

int a, b, c, d, e, sum, avg;

printf("Enter five numbers : \n");
scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

sum = a + b + c + d + e;
avg = sum / 5;

printf("The sum of %d, %d, %d, %d and %d is %d\n", a, b, c, d, e, sum);
printf("The average of %d, %d, %d, %d and %d is %d\n", a, b, c, d, e, avg);


    return 0;
}

