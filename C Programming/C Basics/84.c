#include<stdio.h>
int main(){
    int x,c=0,sum=0;
    float avg;
    printf("Input each number on a separate line (888 to exit):-\n ");
    scanf("%d",&x);
    while (x!=888){
        sum+=x;
        c+=1;
        scanf("%d",&x);
    }
    if (c){
        avg=(float)sum/c;
    }
    printf("The average value of the said number is:= %.4f\n",avg);
    return 0;
}
