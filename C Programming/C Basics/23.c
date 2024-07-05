#include<stdio.h>
int main(){
    float x,y,z,result;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("Enter the value of y: ");
    scanf("%f",&y);
    printf("Enter the value of z: ");
    scanf("%f",&z);
    if (x<(y+z) && y<(x+z) && z<(x+y)){
        result=x+y+z;
        printf("Perimeter of Triangle:= %.1f",result);
    }
    else{
        printf("Triangle is not possible");
    }
    return 0;
}