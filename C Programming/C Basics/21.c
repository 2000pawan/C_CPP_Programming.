#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:- ");
    scanf("%d",&a);
    if (a>0 && a<=20){
        printf("The Range:= [0,20]");
    }
    else if (a>21 && a<=40){
        printf("The Range:= [21,40]");
    }
    else if (a>41 && a<=60){
        printf("The Range:= [41,60]");
    }
    else if (a>61 && a<=80){
        printf("The Range:= [61,80]");
    }
    else{
        printf("Outside the Range!");
    }
    return 0;
}