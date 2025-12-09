/*
Develop a C program to display odd and even numbers in the range 1 to 10
*/

// Solution --->

#include <stdio.h>

int main(){

    int i;

    printf("Even numbers from 1 to 10 are - \n");

    for (i=1; i<=10; i++) {
        if (i%2==0){
            printf("%d", i);
        }
    }

    printf("\nOdd numbers from 1 to 10 are - \n");

    for (i=1; i<=10; i++){
        if (i%2 != 0){
            printf("%d", i);
        }
    }

return 0;

}