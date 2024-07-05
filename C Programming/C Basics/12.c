#include<stdio.h>
int main(){
    char a[10];
    int b;
    double c, d;
    printf("Enter the Employee ID(Max 10 chars)\n");
    scanf("%s",&a);
    printf("Enter the Working hrs\n");
    scanf("%d",&b);
    printf("Enter the Salary amount/hr\n");
    scanf("%lf",&c);
    d=b*c;
    printf("Employee ID = %s\n",a);
    printf("Salary = US $%.2lf",d);
    return 0;
}