/* Take input from the user to get any number.
Write a C programme to reverse the given number.*/

// Solution --->


#include <stdio.h>

int main() {

int n, digits, rev_digits=0;

printf("Enter the number - ");
scanf("%d", &n);

while (n != 0)
{
    digits = n % 10;

    rev_digits = rev_digits*10 + digits;

    n = n/10;
}

printf("%d is the reversed number ", rev_digits);

return 0;

}