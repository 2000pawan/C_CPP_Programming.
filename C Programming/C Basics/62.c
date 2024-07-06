#include<stdio.h>
int main(){
    int x,sum,i,y;
    printf("Enter the number: ");
    scanf("%d",&x);
    y=x;
    if (x>500 || x<=0){
        printf("Please Enter a number positive and less than 500!");
        return 0;
    }
    else{
        while (x>0){
            i=x%10;
            sum=sum+i;
            x=x/10; 
        }
    }
    printf("Sum of the digits of %d is:= %d",y,sum);
    return 0;
}