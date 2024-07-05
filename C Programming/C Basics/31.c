#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a%2==0){
        if (a>=0){
            printf("The number is Positive Even");
            }
        else{
            printf("The number is Negative Even");
            }
    }
    else{
        if (a>0){
            printf("The number is Positive Odd");
            }
        else{
            printf("The number is Negative Odd");
        }
    }
    return 0;
}