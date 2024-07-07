#include<stdio.h>
#include<math.h>
int main(){
    int c,n;
    double x,y;
    printf("Input the values of x and n:-\n ");
    scanf("%lf %d",&x,&n);
    y=1.0;
    c=1;
    while(c<=n){
        y=y*x;
        c++;
    }
    printf("x=%f; n=%d; \nx to power n=%f", x, n,y);
    return 0;
}

