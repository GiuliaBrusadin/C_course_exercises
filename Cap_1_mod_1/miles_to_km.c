/* Distance of a marathone in km
Giulia
Oct. 1st, 2024
*/

#include <stdio.h>

int main(void){
      int miles = 26, yards = 385;
      double kilometers;

      printf("Please give number of miles (as integer): ");
      scanf("%d", &miles);
      printf("Please give number of yards (as integer): ");
      scanf("%d", &yards);
      kilometers = 1.609 * (miles + yards / 1760.0);
      printf ("\nThe distance is %lfkm \n\n", kilometers);
      return 0;
}