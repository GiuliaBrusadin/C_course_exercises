/*functions - 1st example
  Oct. 4th, Giulia B.

  Print cubes and sqares
*/

#include <stdio.h>

double square (double);
double cube (double);

int main(void){

    int how_many = 0;
    printf("I want sqare and cube for 1 to n where n is:  ");
    scanf("%d", &how_many);
    printf("\n sqares and cubes by the interval of .1/n");

    for(int i = 1; i<= how_many; i++){
        for(int j = 0; j < 10; j++){
            double square_value, cube_value;
            square_value = square(i+j/10.0);
            cube_value = cube(i+j/10.0);
            printf("\n%lf\t%lf\t%lf", (i+j/10.0), square_value, cube_value);
        }
    }

    printf("\n\n");
}

double square(double x){
    return (x*x);
}

double cube(double x){
    return (x*x*x);
}