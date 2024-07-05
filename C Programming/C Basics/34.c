# include<stdio.h>
int main(){
    int x,y,i,total_sum=0;
    printf("Enter First number of pair:- ");
    scanf("%d",&x);
    printf("Enter Second number of pair:- ");
    scanf("%d",&y);
    if (x<y){
        printf("Please Enter first number greater than second number! ");
        return 0;
    }
    printf("List of odd numbers:= ");
    for (i=y;i<x;i++){
        if (i%2!=0){
            printf("%d\n",i);
            total_sum+=i;
        }
    }
    printf("Total Sum of Odd number between input pair (%d,%d) is:= %d",y,x,total_sum);
    return 0;
}