/*Assignement 2 for module 2 of C for Everyone: Programming Fundamentals
2nd Oct. 2024, Giulia B.

Write a program that can give the sine of a value between 0 and 1 (non inclusive). 
You will be graded based on whether the program can output a value in the correct 
range and whether your code is well-formatted and logically correct.
*/

#include <stdio.h>
#include <math.h> //necesary for the function sine

#define PI 3.14159

int main (void){

    double angle = 0.0, sine = 0.0;

    printf("Give the value od the angle (rad), given it must be included in interval (0,1):");
    scanf("%lf",&angle);
    sine = sin(angle); // could have been approximated to sine = angle as the input is limited in interval between 0 and 1
    printf("\n\nThe sine is: %lf", sine);

    return 0;

}