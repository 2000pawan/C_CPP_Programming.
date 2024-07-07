#include<stdio.h>
int main(){
    int x;
    printf("x\tx+2\tx+4\tx+6\n");
    printf("---------------------------------------------\n");
    for(x=1;x<=13;x+=3){
        printf("%d\t%d\t%d\t%d \n",x,x+2,x+4,x+6);
    }
    printf("---------------------------------------------\n");
    return 0;
}