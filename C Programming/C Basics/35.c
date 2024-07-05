#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first number:- ");
    scanf("%d",&a);
    printf("Enter second number:- ");
    scanf("%d",&b);
    if (a>b){
        printf("The Pair is descending order!");
    }
    else{
        printf("The Pair is ascending order!");
        }
    return 0;
}