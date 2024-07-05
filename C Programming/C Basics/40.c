#include<stdio.h>
int main(){
    int x,y,i,temp;
    printf("Input the first integer:- ");
    scanf("%d",&x);
    printf("Input the second integer:- ");
    scanf("%d",&y);
    if (x>y){
        temp=x;
        x=y;
        y=temp;
    }
    printf("Number divided by 7 and remainder beetween 2 or 3.\n");
    for(i=x;i<y;i++){
        if (i%7==2 || i%7==3){
            printf("%d\n",i);
        }
    }
    return 0;
}