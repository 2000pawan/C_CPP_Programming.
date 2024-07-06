#include<stdio.h>
int main(){
    int m,i,sum=0,j;
    printf("Input a Positive number less than 100:- ");
    scanf("%d",&m);
    if (m<1 || m>=100){
        printf("Invalid Input");
        return 0;
    }
    j=1;
    for(i=1;j<=m;i++){
        sum+= j * j * j * j;
        j+=i;
        }
    printf("Sum of the first %d natural numbers is %d",m,sum);
    return 0;
}