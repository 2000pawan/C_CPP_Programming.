#include<stdio.h>
int main(){
    int a,b;
    float c;
    printf("Enter Total Distance in KM:-");
    scanf("%d",&a);
    printf("Total Fuel Spent in liters:-");
    scanf("%d",&b);
    c=a/b;
    printf("Average Consumption (km/lt):-%.2f",c);
    return 0;
}