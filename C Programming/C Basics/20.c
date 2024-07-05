#include<stdio.h>
#include<math.h>
int main(){
    double x,y,z,pr1;
    printf("Enter the First number:- ");
    scanf("%lf",&x);
    printf("Enter the Second number:- ");
    scanf("%lf",&y);
    printf("Enter the Third number:- ");
    scanf("%lf",&z);
    pr1=(y*y) - (4*(x)*(z));
    if (pr1 > 0 && x!=0){
        double a,b;
        pr1=sqrt(pr1);
        a=(-y + pr1)/(2*x);
        b=(-y - pr1)/(2*x); 
        printf("Root1:- %.5lf\n",a);
        printf("Root2:- %.5lf",b);
    }
    else{
        printf("Impossible to find the roots.");
    }
    return 0;
}