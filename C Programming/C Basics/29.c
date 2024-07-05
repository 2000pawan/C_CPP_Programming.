#include<stdio.h>
int main(){
    int arr[5],sum=0,i;
    printf("Enter the first number:- ");
    scanf("%d",&arr[0]);
    printf("Enter the second number:- ");
    scanf("%d",&arr[1]);
    printf("Enter the third number:- ");
    scanf("%d",&arr[2]);
    printf("Enter the fourth number:- ");
    scanf("%d",&arr[3]);
    printf("Enter the fifth number:- ");
    scanf("%d",&arr[4]);
    for(i=0;i<5;i++){
        if (arr[i] % 2 !=0){
            sum=sum+arr[i];
        }
    }
    printf("The sum of all odd numbers is:- %d",sum);
    return 0;
}