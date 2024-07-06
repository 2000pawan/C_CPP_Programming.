#include<stdio.h>
#define INCH_TO_CM 2.54
int main(){
    double a,inc;
    printf("Enter the distances in cm:- ");
    scanf("%lf",&a);
    inc=a/INCH_TO_CM;
    printf("Distance of %0.2lf cms is = %0.2lf inches\n", a, inc);
    return 0;
}