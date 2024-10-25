/*functions - 1st example
  Oct. 4th, Giulia B.

  Fibonacci sequens
*/

#include <stdio.h>

long int fibonacci(int n){
    if(n<=1){
        return n;
    }else{
        return (fibonacci(n-1)+fibonacci(n-2));
    }
}

int main(void){

    int n = 0;
    
    printf("give n up to 20:  ");
    scanf("%d", &n);
     printf("\nThe fibonacci sequence of %d is", n);
    for(int i = 0; i<n; i ++){
        printf("\n %d \t %ld \n\n", i, fibonacci(i));
    }
    return 0;
}