/*Do we need to get an unbrella?
  Oct. 3rd, Giulia B.
*/

#include <stdio.h>

int main(void){

    int weather = 0, outside = 0;

    printf("Indicate weathere you are outside (1) or inside (0): 1");
    scanf("%d", &outside);
    printf("Indicate weathere it is raining (1) or sunny (0): ");
    scanf("%d", &weather);

    if (outside && weather)
    {
        printf("\nPlease take an umbrella with you\n\n");
    }
    else
    {
        printf("\nNo need for umbrella today \n\n");
    }

    return 0;
        
}