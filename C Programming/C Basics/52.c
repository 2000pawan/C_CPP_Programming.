#include<stdio.h>
int main(){
    int arr[5],i,temp,x;
    printf("Enter the elements of array\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    x=0;
    for(i=1;i<5;i++){
        if (arr[i]<temp){
            temp=arr[i];
            x=i;
        }
    }
    printf("Smallest value is:= %d\n",temp);
    printf("position is:= %d",x);
    return 0;
}
