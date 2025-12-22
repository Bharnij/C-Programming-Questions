/* Write a program to take input from the user and 
check whether the year is a leap year or not */


#include <stdio.h>

int main(){

int year;

printf("Enter the year - ");
scanf("%d", &year);

if (year % 400 == 0){
    printf("The year %d is a leap year ", year);
}

else if (year % 100 ==0){
    printf("The year %d is not a leap year", &year);
}

else if (year % 4 == 0 ){
    printf("The year %d is a leap year", &year);
}

else {
    printf("The year %d is not a leap year", &year);
}

return 0;

}