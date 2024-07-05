#include<stdio.h>
int main(){
    int x,y,arr[5],i;
    printf("Input the first number:- ");
    scanf("%d",&arr[0]);
    printf("Input the second number:- ");
    scanf("%d",&arr[1]);
    printf("Input the third number:- ");
    scanf("%d",&arr[2]);
    printf("Input the fourth number:- ");
    scanf("%d",&arr[3]);
    printf("Input the fifth number:- ");
    scanf("%d",&arr[4]);
    x=0;
    y=0;
    for (i=0;i<5;i++){
        if (arr[i]<0){
            x+=1;
        }
        else{
            y+=1;
        }
    }
    printf("Number of Positive numbers:- %d\n",y);
    printf("Number of Negative numbers:- %d",x);
    return 0;
}