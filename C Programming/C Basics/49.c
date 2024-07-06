#include<stdio.h>
int main(){
    int arr[5],i,a;
    printf("Input the 5 member of the array!\n");
    scanf("%d",&a);
    arr[0]=a;
    for (i=1;i<5;i++){
        arr[i]=a*3;
        a=arr[i];
    }
    printf("Array values are:- \n");
    for (i=0;i<5;i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}