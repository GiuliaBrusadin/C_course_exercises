/*Pre-processorin C
  Oct. 14th, Giulia B.

Produce a macro that rnandomly generates the weight of a male elephant seal
  */

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 #define MAX_EL_SEAL_WT_MALE 8800
 #define MIN_EL_SEAL_WT_MALE 4400

#define RANGE 4400
#define POPULATION 1000
#define WEIGHT_OVER rand()% RANGE
#define WEIGHT WEIGHT_OVER + MIN_EL_SEAL_WT_MALE
#define FILL for ( i = 0; i < POPULATION; i++){ \
            data[i] = WEIGHT;}


void print_data(int d[], int size){

    for (int i = 0; i < size; i++)
        {
            printf("%d\t");
            if((i %10 == 0)){
                printf("\n");
            }
        }
    
}

int main(){
    int data[POPULATION];
    int i;
    srand(time(0));  // this resets the seed of the rand variable, so that we have different numbers each time wa call rand in the code
    FILL;
    print_data(data, POPULATION);
    printf("\n\n");

    return 0;
}


