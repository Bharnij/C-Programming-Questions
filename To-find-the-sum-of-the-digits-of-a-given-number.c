/* Question - Take input from the user to get any number of any digits.
Find the sum of the digits of the given number */

// Solution --->

#include <stdio.h>

int main() {

    int n, digit, sum=0;

    printf("Enter a number - ");
    scanf("%d", &n);

    while (n != 0) {

        digit = n%10;

        sum = sum + digit;

        n =n/10;

    }

    printf("Sum of the digits = %d ", sum);

    return 0;

}
