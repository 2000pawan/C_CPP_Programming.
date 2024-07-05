#include<stdio.h>
#define MAX 5
int main(){
    int arr[MAX],i,j,max=0,pos=0;
    printf("Input 5 integers: \n");
    for (i=0;i<MAX;i++){
        scanf("%d",&arr[i]);
    }
    for (j=0;j<MAX;j++){
        if (arr[j]>max){
            max=arr[j];
            pos=j;
        }
    }
    printf("The maximum element is %d\n The position is %d",max,pos+1);
    return 0;
}