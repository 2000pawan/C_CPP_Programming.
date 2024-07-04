#include<stdio.h>
int main(){
    double weight1,total_item1,weight2,total_item2;
    float average;
    printf("Enter the value of weight1,total_item1,weight2,total_item2\n");
    scanf("%lf%lf%lf%lf",&weight1,&total_item1,&weight2,&total_item2);
    average=((weight1*total_item1)+(weight2*total_item2))/(total_item1+total_item2);
    printf("The average is %f",average);
    return 0;
}