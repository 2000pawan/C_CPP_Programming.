#include<stdio.h>
int main(){
    int arr[5],i;
    printf("Input the 5 member of the array!\n");
    for (i=0;i<5;i++){
        scanf("%d",&arr[i]);
        if (arr[i]==0 || arr[i]<0){
            arr[i]=100;
        }
    }
    for (i=0;i<5;i++){
        printf("Array values are:- \n");
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}