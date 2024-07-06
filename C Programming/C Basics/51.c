#include<stdio.h>
int main(){
    int arr[5],i,x=4,temp;
    printf("Enter the elements of array\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Swap value of array is:-\n");
    for(i=0;i<5;i++){
        temp=arr[i];
        arr[i]=arr[x];
        x-=1;
        printf("arr[%d] is:= %d\n",i,arr[i]);
        arr[i]=temp;
    }
    return 0;
}