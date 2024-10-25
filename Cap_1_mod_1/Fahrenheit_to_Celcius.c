/* Conversion of Fahrenheit to Celsius
Giulia
Oct. 1st, 2024
*/

#include <stdio.h>

int main(void){
    int F, C;

    printf("Please enter the temperature in Fahrenahaiet degrees as an integer: 350");
    scanf("%d", &F);
    C = (F - 32)/1.8; //silent conversion from double to integer
    printf("\n %dF is %dC.\n", F,C);

    return 0;
}