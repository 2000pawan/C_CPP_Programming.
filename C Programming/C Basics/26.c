#include<stdio.h>
int main(){
    int i;
    printf("Even number between 1 to 50 (inclusive):= \n");
    for (i=1;i<=50;i++){
        if (i%2==0){
            printf("%d ",i);
            }
    }
    return 0;
}