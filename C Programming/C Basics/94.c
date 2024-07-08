#include<stdio.h>
int main(){
    int w,h,bmi;
    printf("Enter your weight in kg\n");
    scanf("%d",&w);
    printf("Enter your height in cm\n");
    scanf("%d",&h);
    bmi=w/(h*h);    
    if(bmi<18.5)
    printf("Underweight(%d)\n",bmi);
    else if(bmi<25)
    printf("Normal(%d)\n",bmi);
    else if(bmi<30)
    printf("Overweight(%d)\n",bmi);
    else
    printf("Obese(%d)\n",bmi);
    return 0;
}