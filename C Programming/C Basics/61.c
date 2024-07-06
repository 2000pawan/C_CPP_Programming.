#include<stdio.h>
#include<math.h>
int main(){
    double x,y;
    printf("Enter the value of x: ");
    scanf("%lf",&x);
    if (x!=0.0){
        y=sin(1/x);
        printf("Value of sin(1/x) is:= %.4lf\n",y);
    }
    else{
        printf("Value of x should not be zero!");
    }
    return 0;
}