#include<stdio.h>
int main(){
    int arr[5],i;
    printf("Enter the elements of array\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        if (arr[i]<5){
            printf("The value less than 5 is arr[%d]:= %d\n",i,arr[i]);
        }
    }
    return 0;
}