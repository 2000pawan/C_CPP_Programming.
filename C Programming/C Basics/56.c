#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number:- ");
    scanf("%d",&a);
    a<<=a;
    b=a;
    printf("The left shifted data is:= %d",b);
    return 0;
}