#include<stdio.h>
int main(){
    int a,y,m,d;
    printf("Enter the no. of days :- ");
    scanf("%d",&a);
    y=a/365;
    m=(a%365)/30;
    d=(a%365)%30;
    printf("The no. of years is %d Year(s)\n",y);
    printf("The no. of months is %d Month(s)\n",m);
    printf("The no. of days is %d Day(s)\n",d);
    return 0;
}