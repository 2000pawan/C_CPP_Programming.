#include<stdio.h>
int main(){
    int x,y;
    printf("Input the First Integer:- ");
    scanf("%d",&x);
    printf("Input the Second Integer:- ");
    scanf("%d",&y);
    if (x%y==0){
        printf("%d is Multiple of %d.",x,y);
    }
    else{
        printf("%d is not Multiple of %d.",x,y);
    }
    return 0;
}