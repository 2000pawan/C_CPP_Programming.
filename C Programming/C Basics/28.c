#include<stdio.h>
int main(){
    float arr[5],avg;
    int x,i,y;
    printf("Enter First number:- ");
    scanf("%f",&arr[0]);
    printf("Enter Second number:- ");
    scanf("%f",&arr[1]);
    printf("Enter Third number:- ");
    scanf("%f",&arr[2]);
    printf("Enter Fourth number:- ");
    scanf("%f",&arr[3]);
    printf("Enter Fifth number:- ");
    scanf("%f",&arr[4]);
    x=0;
    y=0;
    for(i=0;i<5;i++){
        if (arr[i]>0){
            x+=1;
            y+=arr[i];
            }
        }
    avg=y/x;
    printf("Number of Positive:- %d\n",x);
    printf("Average of positive numbers is:- %.2f",avg);
    return 0;
}