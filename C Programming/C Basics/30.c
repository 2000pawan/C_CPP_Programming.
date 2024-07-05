#include<stdio.h>
int main(){
    int a,i;
    printf("Enter the specified value:- ");
    scanf("%d",&a);
    printf("List of Square of each one of the even values from 1 to %d.\n",a);
    for(i=1;i<=a;i++){
        if (i%2==0){
            printf("%d^2 = %d\n",i,i*i);
        }
    }
    return 0;
}