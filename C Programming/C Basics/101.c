#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:\n");
    scanf("%d",&x);
    if (x>=0 && x<=30){
        printf("Range (0,30)");
    }
    else if (x>=31 && x<=50){
        printf("Range (31,50)");
    }
    else if (x>=51 && x<=80){
        printf("Range (51,80)");
    }
    else{
        printf("Range (81,100)");
    }
    return 0;
}