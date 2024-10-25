#include <stdio.h>

#define PI 3.14159

int main(){
    double main = 0.0, radius =0.0;
    printf("Enter radius in m: ");
    scanf("%lf", &radius);
    main = PI * radius * radius;
    printf("A radius of %lf m gives and area of %lf sq.m", radius, main);

    return 0;
}