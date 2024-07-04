#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter the First Number:-\n");
    scanf("%d",&x);
    printf("Enter the Second Number:-\n");
    scanf("%d",&y);
    printf("Enter the Third Number:-\n");
    scanf("%d",&z);
    if(x>y && x>z)
    printf("Maximum Value of three Number is:- %d",x);
    else if(y>x && y>z)
    printf("Maximum Value of three Number is:- %d",y);
    else if(z>x && z>y)
    printf("Maximum Value of three Number is:- %d",z);
    return 0;
}