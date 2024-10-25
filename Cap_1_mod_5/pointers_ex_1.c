/*functions - 1st example
  Oct. 4th, Giulia B.
*/

#include <stdio.h>

#define SIZE 5

int main(void){

    int grades[SIZE] = {78, 67, 83, 88, 92};
    double sum = 0.0;
    double *ptr_of_sum = &sum;

    printf("\nMy grades are: \n");

    for(int i = 0; i < SIZE; i++){
        printf("%d \t", grades[i]);
    }

    for(int i = 0; i < SIZE; i++){
        sum += grades[i];
    }

    printf("\n\nMy evarage is: %lf\n\n", (sum/SIZE));

    printf("sum variable is stored at %p, or %lu in decimal, and is %lf\n\n",
        ptr_of_sum, ptr_of_sum, sum);

    printf("The grades are stored between: %lu and %lu \n\n", 
        &grades[0], (grades+SIZE));

}