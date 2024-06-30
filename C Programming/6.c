#include<stdio.h>
int main(){
    int a;
    float c,d,pi;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("The value of a is %d\n",a);
    pi=3.14;
    c=pi*a*a;
    d=2*pi*a;
    printf("Perimeter of the Circle = %f inches\n",d);
    printf("The area of the Circle = %f square inches",c);
    return 0;
}