/*Array and pointers
  Oct. 8th, Giulia B.

  Given the attached file listing elephant seal weights (elephant_seal_data), 
  read them into an array and compute the average weight for the set of 
  the elephant seals.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1000
//Given variable lenght arrays have not been discussed yet, I have manually checked 
//the number of values in the file

/*My file path is 
/home/giulia/Documents/vs_code_miscellanius/Programmazione C/Cap_1_mod_5
same folder as the program file*/
void f_get_data(FILE *file_ptr, int data[], int size);

double f_average(int data[], int size);

int main(void){

    int data[SIZE]; 
    double average;
    //opening file
    FILE *file_ptr;
    file_ptr = fopen("elephant_seal_data.txt", "r");

    f_get_data(file_ptr, data, SIZE);

    //closing file 
    fclose(file_ptr);

    average = f_average(data, SIZE);

    printf("\nThe avarage wait in this population of elephant seals is %.2lf\n\n", average);

    return 0;
}

void f_get_data(FILE *file_ptr, int data[], int size){
    
    for(int i = 0; i < size; i++){
        fscanf(file_ptr, "%d\t", &data[i]);
        //This printf can be used to check if the data are acquired correctly
        //printf("\n %d", data[i]);
        
    }

}

double f_average(int data[], int size){
    
    int sum = 0;

    for(int i = 0; i < size; i++){
        sum += data[i];
    }
      
    return ((sum*1.0)/size);
}