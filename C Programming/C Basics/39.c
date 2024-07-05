#include<stdio.h>
int main(){
    int x,y,sum=0,i;
    printf("Input First number:- ");
    scanf("%d",&x);
    printf("Input Second number:- ");
    scanf("%d",&y);
    if (x>y){
        for (i=y;i<=x;i++){
            if ((i%17) !=0){
                sum+=i;
            }
        }
    printf("Sum of all number betwwen %d & %d is:= %d",y,x,sum);
    }
    else{
        for (i=x;i<=y;i++){
            if ((i%17) !=0){
                sum+=i;
            }
        }
    printf("Sum of all number betwwen %d & %d is:= %d",x,y,sum);
    }    
    return 0;
}