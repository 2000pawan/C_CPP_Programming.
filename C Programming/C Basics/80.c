#include<stdio.h>
int main(){
    int x,i,j;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x < 1 || x > 10) {
        printf("Size should be in the range 1 to 10\n"); 
        return 0; 
    }
    printf("Size of the square:- \n");
    printf("-----------------------------------------\n");
    for (i=1;i<=x;i++){
        for (j=1;j<=x;j++){
            printf(" #");
            }
            printf("\n");
    }
    printf("\n------------------------------------------");
    return 0;
}