/* Develop a C program that reads a list of student names and marks,
then outputs the name of the student with the highest mark.*/

// Solution (with explanation hehe)--->

#include <stdio.h>

int main(){

    // Part 1 - Here, we take the input from the user - how many students are present  

    int n ;
    printf("Enter the number of students : ");
    scanf("%d", &n);

    // Part 2 - creating arrays for names and marks

    char names[n][30]; 

    int marks[n];
    
    // Part 3 - taking student inputs

    for (int i=0; i<n; i++){ 
    
    printf("Name of the student %d - ", i+1);
    scanf("%s", names[i]); 

    // Part 4 - taking student marks

    printf("Enter marks %d", i+1);
    scanf("%d", &marks[i]); 
    
    
    // Part 5 - Finding the highest or max marks

    int max = marks[0];

    for(int i=0; i<n; i++){

        if(marks[i]>max){

            max = marks[i];
        }

    }
    printf("\n Highest Mark = %d\n", max);

    // Part 6 - Looping again to find all students with matching marks 

    for(int i=0; i<n; i++);

    // PArt 7 - Checking if there are two students with max marks 

    if (marks[i] == max){

        printf("%s\n", names[i]);

    }

    }

return 0;

}
