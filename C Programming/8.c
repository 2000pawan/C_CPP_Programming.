#include<stdio.h>
int main(){
    int y,d,w,days;
    printf("Enter the number of days: \n");
    scanf("%d",&days);
    y=days/365;
    w=(days%365)/7;
    d=days-((y*365)+(w*7));
    printf("Years:- %d\n",y);
    printf("Weeks:- %d\n",w);
    printf("Days:- %d",d);
    return 0;
}