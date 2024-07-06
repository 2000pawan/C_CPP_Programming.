#include<stdio.h>
int main(){
    int arr[99],i,sum=0,c=0;
    float avg;
    printf("Input Mathematics Marks (0 to terminate):- \n");
    for (i=0; ; i++){
        scanf("%d",&arr[i]);
        if (arr[i]<=0){
            break;
        }
        sum+=arr[i];
        c++;
    }
    avg=(float)sum/(float)c;
    printf("Average of the Mathematics marks is:= %.2f",avg);
    return 0;
}