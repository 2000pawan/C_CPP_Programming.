#include<stdio.h>
int main(){
    int p,q,r,s;
    printf("Enter the value of p:- ");
    scanf("%d",&p);
    printf("Enter the value of q:- ");
    scanf("%d",&q);
    printf("Enter the value of r:- ");
    scanf("%d",&r);
    printf("Enter the value of s:- ");
    scanf("%d",&s);
    if ((q>r) && (s>p) && ((r+s >p+q)) && (r>0) && (s>0) && (p%2==0))
    {
        printf("Correct Values!");
    }
    else
    {
        printf("Wrong Values!");
    }
    return 0;
}