#include<stdio.h>
int main(){
    int p,t,si;
    float r;
    printf("Enter the principal amount: ");
    scanf("%d",&p);
    printf("Enter the rate of interest: ");
    scanf("%f",&r);
    printf("Enter the time period: ");
    scanf("%d",&t);
    si=p*r*t/100;
    printf("Simple interest is: %d",si);
    return 0;
}