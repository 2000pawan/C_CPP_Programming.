#include<stdio.h>
int main(){
    int i,j,x,y=0;
    printf("The Prime numbers between 1 to 200 are:- \n");
    for(i=2;i<200;i++){
        x=1;
        for(j=2;j<=i/2 && x==1;j++){
            if (i%j==0){
                x=0;
            }
        }
        if (x==1){
            printf("%d ",i);
            y++;
            if (y%10==0){
                printf("\n");
            }
        }
    }
    printf("\n");
    return 0;
}