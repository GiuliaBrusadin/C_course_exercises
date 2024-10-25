/*functions - 1st example
  Oct. 4th, Giulia B.
*/

#include <stdio.h>

#define SIZE 5

void swap(int *i, int *j);

int main(void){

    int a = 7, b = 10;

    printf("a is %d and b is %d\n", a, b);

    swap(&a, &b);
    
    printf("And now a is %d and b is %d\n", a, b);
}

void swap(int *p_i, int *p_j){
    int k = *p_i;
    printf("\n*p_i is %lu while p_i is %p \n\tand *p_j is %lu while p_j is %p\n", 
      *p_i, p_i, *p_j, p_j);
    *p_i = *p_j;
    *p_j = k;
    printf("\n*p_i is %lu while p_i is %p \n\tand *p_j is %lu while p_j is %p\n", 
      *p_i, p_i, *p_j, p_j);
}