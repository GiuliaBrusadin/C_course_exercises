/*Do we need to get an unbrella?
  Oct. 3rd, Giulia B.
*/

#include <stdio.h>

int main(void){

    int speed = 0;

    printf("Indicate your speed:");
    scanf("%d", &speed);

    if (speed <= 65)
    {
        printf("\nYou are good to go\n\n");
    }
    else
    {
        printf("\nYou are speeding. Her is your ticket\n\n");
    }

    return 0;
        
}