/*Pre-processorin C
  Oct. 14th, Giulia B.

Use of ASSERT
*/
#include <assert.h>
#include <stdio.h>

int main(){
    
    double x, y;
    int i = 3;
    while(i >0){
        printf("Read two floats:\n");
        scanf("%lf %lf", &x, &y);
        assert(y!=0);
        printf("\nx/y is: %lf\n", x/y);
    }
    return 0;
}