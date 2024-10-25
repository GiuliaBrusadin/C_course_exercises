/*Valentine's day program
  Oct. 3rd, Giulia B.
*/

#include <stdio.h>

int main(void){

    int repeat = 0;
    printf("How much do you love me on a scale from 1 to 10?  ");
    scanf("%d", &repeat);
    printf("I love you");
    while (repeat >= 0)    {
        printf(" very");
        repeat--;
    }
    printf(" much\n\n");
    return 0;

}