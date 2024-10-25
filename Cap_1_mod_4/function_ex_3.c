/*functions - 1st example
  Oct. 4th, Giulia B.

  Print cubes and sqares
*/

#include <stdio.h>
#include <math.h>

int f_sum(int n);

int main(void){

    double number = 0;

    printf("Insert n:  ");
    scanf("%lf", &number);
    // the number will be converted when passed to the function
    printf("\nThe factorial sum is %d \n\n", f_sum(number));

    return 0;
}

int f_sum(int n){

    int sum = 0;

    n = abs(n);

    for (  ; n>0; n--){
        sum += n;
    }

    return sum;
}

