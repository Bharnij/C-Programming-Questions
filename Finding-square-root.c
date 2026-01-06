#include <stdio.h>
#include <math.h>

int main() {
    float number, squareRoot;

    printf("Enter a number to find its square root: ");
    scanf("%f", &number);

    if (number < 0) {
        printf("Cannot calculate square root of a negative number.\n");
    } else {
        squareRoot = sqrt(number);
        printf("The square root of %.2f is %.2f\n", number, squareRoot);
    }

    return 0;
}


