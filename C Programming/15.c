#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d;
    float result;
    printf("Enter x1:- ");
    scanf("%d",&a);
    printf("Enter y1:- ");
    scanf("%d",&b);
    printf("Enter x2:- ");
    scanf("%d",&c);
    printf("Enter y2:- ");
    scanf("%d",&d);
    result=((c-a)*(c-a))+((d-b)*(d-b));
    printf("Distance between two points is:-\n%.4f",sqrt(result));
    return 0;
}
