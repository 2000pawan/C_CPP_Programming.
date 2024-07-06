#include<stdio.h>
int main(){
    double x,y,z,a,min,max,diff;
    printf("Input four numbers:- \n");
    scanf("%lf %lf %lf %lf",&x,&y,&z,&a);
    min = x;
    max = x;    
    if(y<min){
        min = y;
    }
    if(y>max){
        max = y;
    }
    if(z<min){
        min = z;
    }
    if(z>max){
        max = z;
    }
    if(a<min){
        min = a;
    }
    if(a>max){
        max = a;
    }
    diff = max - min;
    printf("The difference between the largest and smallest number is:=  %.4lf",diff);
    return 0;
}