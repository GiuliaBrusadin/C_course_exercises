/*Valentine's day program
  Oct. 4th, Giulia B.
*/

#include <stdio.h>

int main(void){

    int speed = 0;
    printf("Enter your speed as an integer:  ");
    scanf("%d", &speed);
    speed = (speed <=65)? (65) : (speed <= 70)? (70) : (90);
    /*This is evaluated as:
        if (speed <=65){
        speed = 65;
        }elseif(speed<=70){ //we knoe here speed is > 65, other wse we sould have already exitehe if
        speed = 70;
        }else{
        speed = 90;
        }
    */
    switch(speed){
        case 65: printf("\nNo ticket\n\n");break;
        case 70: printf("\nSpeeding ticket\n\n");break;
        case 90: printf("\nExpensive speeding ticket\n\n");break;
        default: printf("\nWrong value given for speed\n\n");break;
    }
    
    return 0;

}