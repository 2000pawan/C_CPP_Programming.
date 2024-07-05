// #include<stdio.h>
// int main(){
//     int a,b,c,d,e,x;
//     printf("Enter First number:- ");
//     scanf("%d",&a);
//     printf("Enter Second number:- ");
//     scanf("%d",&b);
//     printf("Enter Third number:- ");
//     scanf("%d",&c);
//     printf("Enter Fourth number:- ");
//     scanf("%d",&d);
//     printf("Enter Fifth number:- ");
//     scanf("%d",&e);
//     x=0;
//     if (a%2!=0){
//         x=x+a;
//     }
//     if (b%2!=0){
//         x=x+b;
//     }
//     if (c%2!=0){
//         x=x+c;
//     }
//     if (d%2!=0){
//         x=x+d;
//     }
//     if (e%2!=0){
//         x=x+e;
//     }
//     printf(" Sum of all odd Values:= %d",x);
//     return 0;
// }
#include<stdio.h>
int main(){
    int j,numbers[5],total=0;
    printf("\n Input the First number:- ");
    scanf("%d",&numbers[0]);
    printf("\n Input the Second number:- ");
    scanf("%d",&numbers[1]);
    printf("\n Input the Third number:- ");
    scanf("%d",&numbers[2]);
    printf("\n Input the Fourth number:- ");
    scanf("%d",&numbers[3]);
    printf("\n Input the Fifth number:- ");
    scanf("%d",&numbers[4]);
    for (j=0;j<5;j++){
        if (numbers[j]%2!=0){
            total=total+numbers[j];
        }
    }
    printf("\n Sum of all odd Values:= %d\n",total);
    return 0;
    }
    