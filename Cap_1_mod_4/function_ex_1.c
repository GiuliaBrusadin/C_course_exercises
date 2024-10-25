/*functions - 1st example
  Oct. 4th, Giulia B.

  Valentine's program rewritten using functions
*/

#include <stdio.h>


void wrt_every(int count){

     while (count >= 0){
        printf(" very");
        count--;
    }
}

int main(void){

    int repeat = 0;
    printf("How much do you love me on a scale from 1 to 10?  ");
    scanf("%d", &repeat);
    printf("I love you");

    wrt_every(repeat);
    printf(" much\n\n");

    return 0;
}