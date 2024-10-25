/*functions - 1st example
  Oct. 4th, Giulia B.

  Grades avarage
*/

#include <stdio.h>

#define SIZE 5

double f_average(int how_many, int grades[]){
    double sum = 0.0;

    for(int i = 0; i < how_many; i++){
        sum += grades[i];
    }

    return (sum/how_many);
}

void print_grades(int how_many, int grades[]){

    printf("\nMy grades are: \n");

    for(int i = 0; i < how_many; i++){
        printf("%d \t", grades[i]);
    }    
}

int main(void){

    int grades[SIZE] = {78, 67, 83, 88, 92};
    double sum = 0.0, average = 0.0;

/*  program without the use of functions

    printf("\nMy grades are: \n");

    for(int i = 0; i < SIZE; i++){
        printf("%d \t", grades[i]);
    }

    for(int i = 0; i < SIZE; i++){
        sum += grades[i];
    }
*/

    print_grades(SIZE, grades);
    average = f_average(SIZE, grades);
    printf("\n\nMy evarage is: %lf\n\n", average);
    
}