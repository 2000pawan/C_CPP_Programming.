#include<stdio.h>
int main(){
    int i;
    printf("Number Square Cube.\n");
    printf("=============================================\n");
    for(i=0;i<=20;i++){
        printf("%d\t%d\t%d\n",i,i*i,i*i*i);
    }
    printf("=============================================\n");
    return 0;
}