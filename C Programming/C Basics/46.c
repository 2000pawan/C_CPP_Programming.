#include<stdio.h>
int main(){
    double s=0,i,j=1,d;
    for(i=1;i<=7;i+=2){
        d=(i/j);
        s+=d;
        j=j*2;
    }
    printf("Value of series:= %.2lf",s);
    return 0;
}