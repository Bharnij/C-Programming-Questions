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

    char names[n][30]; // i don't think anybody's name is above 30 characters, 
                                    // hence we are alotting a max of 29 characters per name
                                    // feel free to add as much character limit as you want
    
    int marks[n]; // this is an integer array - stores marks of each student
    
    // Part 3 - taking student inputs

    for (int i=0; i<n; i++){ // this loop runs n times from i=0 to i=n-1
                             // i++ is used to increase the value of i by 1, after every time the loop runs once
    
    printf("Name of the student %d - ", i+1);
    scanf("%s", names[i]); // %s is a format specifier just like %d - it reads a word with no spaces
                           // names[i] is a 2D array where rows = students and columns = characters
                           // i=0 stores 1st student name , i=1 stores 2nd student name .....

    // Part 4 - taking student marks

    printf("Enter marks %d", i+1);
    scanf("%d", &marks[i]); // marks is stored in the marks array at index i

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
