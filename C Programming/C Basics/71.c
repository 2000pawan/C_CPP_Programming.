#include<stdio.h>
#define N 10
int main(){
    char a[80],b[80];
    int i;
    printf("Enter the character\n");
    scanf("%s",&a);
    for (i=0;a[i]!='\0';i++){
        b[i]=a[i];
    b[i]='\0';
    }
    printf("\n");
    printf("Original String :- %s",a);
    printf("\nNumber of characters := %d\n",i);
    return 0;
}