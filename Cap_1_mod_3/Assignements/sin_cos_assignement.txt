/* Assignement for chapter 1 module 3
   Oct. 4th 2024, Giulia B.

   Write a C program that has a function that prints a table 
   of values for sine and cosine between (0, 1). 
*/

#include<stdio.h>
#include<math.h> 

int main(void){ 

    double interval;

    for(int i = 0; i <= 20; i++){
        interval = i/20.0;
        
        printf("sin( %lf ) = %lf \t", interval, sin(interval));
        printf("cos( %lf ) = %lf \n", interval, cos(interval));

    }


    printf("\n+++++++\n");
    return 0;
}