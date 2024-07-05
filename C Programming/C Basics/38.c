#include<stdio.h>
int main(){
    int x,y;
    float div_result;
    printf("Enter First number:- ");
    scanf("%d",&x);
    printf("Enter Second number:- ");
    scanf("%d",&y);
    if (y!=0 && x!=0){
        div_result = (float)x/y;
        printf("Division result is:- %.2f",div_result);
    }
    else{
        printf("Division is not possible");
    }
    return 0;
}