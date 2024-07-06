#include<stdio.h>
int main(){
    int a,b,i,j=1,x=0;
    printf("Enter the number of rows: ");
    scanf("%d",&a);
    printf("Enter the number of columns: ");
    scanf("%d",&b);
    for(i=1;i<=a;i++){
        while (x<b){
            printf("%d ",j++);
            x++;
        }
        x=0;
        printf("\n");
    }
    return 0;
}