#include<stdio.h>
int main(){
    int a,b,c=0;
    printf("enter the number:");
    scanf("%d",&a);
    printf("The original number is:= %d\n",a);
    while (a>=1){
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    printf("The reverse of the number is:= %d",c);
    return 0;
}