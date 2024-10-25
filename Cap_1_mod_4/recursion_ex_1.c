/*functions - 1st example
  Oct. 4th, Giulia B.

  Factorial calculation
*/

#include <stdio.h>

long int factorial(int n){ //long int is needed for n to be up to 20

    long int product = 0;

    if(n == 1){
        return product = 1;
    }else{
        return(factorial(n-1)*n);
    }

}

int main(void){

    int n = 0;
    
    printf("give n up to 20:  ");
    scanf("%d", &n);
    printf("\nThe factorial of %d is %ld \n\n", n, factorial(n));

    return 0;
}