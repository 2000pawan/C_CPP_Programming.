#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("The value of a is %d and b is %d\n",a,b);
    c=a*b;
    d=2*(a+b);
    printf("Perimeter of the rectangle = %d\n",d);
    printf("The area of the rectangle = %d",c);
    return 0;
}