#include<stdio.h>
int main(){
    int a,i;
    printf("Enter the number: ");
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        if (a%i==0){
            printf("%d\n",i);
        }
    }
    return 0;
}