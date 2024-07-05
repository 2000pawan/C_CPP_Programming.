#include<stdio.h>
int main(){
    int pass,a=10;
    while (a>0){
        printf("Enter the password: ");
        scanf("%d",&pass);
        if(pass==1234){
        printf("Correct Password!");
        break;
            }
        else{
        printf("Incorrect Password!\n");
        a-=1;
            }
    }
    return 0;
}