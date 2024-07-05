#include<stdio.h>
int main(){
    int amt,total;
    printf("Enter amount:- ");
    scanf("%d",&amt);
    total=(int)amt/500;
    printf("Total number of 500 rupee notes:- %d\n",total);
    amt=amt-(total*500);
    total=(int)amt/200;
    printf("Total number of 200 rupee notes:- %d\n",total);
    amt=amt-(total*200);
    total=(int)amt/100;
    printf("Total number of 100 rupee notes:- %d\n",total);
    amt=amt-(total*100);
    total=(int)amt/50;
    printf("Total number of 50 rupee notes:- %d\n",total);
    amt=amt-(total*50);
    total=(int)amt/20;
    printf("Total number of 20 rupee notes:- %d\n",total);
    amt=amt-(total*20);
    total=(int)amt/10;
    printf("Total number of 10 rupee notes:- %d\n",total);
    amt=amt-(total*10);
    total=(int)amt/5;
    printf("Total number of 5 rupee notes:- %d\n",total);
    amt=amt-(total*5);
    total=(int)amt/2;
    printf("Total number of 2 rupee notes:- %d\n",total);
    amt=amt-(total*2);
    total=(int)amt/1;
    printf("Total number of 1 rupee notes:- %d",total);
    return 0;
}