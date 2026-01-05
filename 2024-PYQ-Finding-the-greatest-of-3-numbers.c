/* Question - Take user input to enter any 3 random numbers. 
Find the greatest number out those 3 numbers */

// Solution below ----->

// This is also a 2024 PYQ btw


#include <stdio.h>

int main() {

    int num1, num2, num3;

    printf("Enter your first nunmber ");
    scanf("%d", &num1);

    printf("Enter your second nunmber ");
    scanf("%d", &num2);

    printf("Enter your third nunmber ");
    scanf("%d", &num3);

    if ((num1>num2 && num1>num3)) {
            printf("%d is the greatest ", num1);
    }

    else {
        if (num2>num3)
            printf("%d is the greatest ", num2);

        else
            printf("%d is the greatest ", num3);
    }

    return 0;

}






