#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number:- ");
    scanf("%d",&a);
    printf("Enter the second number:- ");
    scanf("%d",&b);
    if (a<b && b%a==0){
        printf("Multiplied!");
    }
    else if(a>b && a%b==0){
        printf("Multiplied!");
    }
    else{
        printf("Not multiplied!");
    }
    return 0;
}