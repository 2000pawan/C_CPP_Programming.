#include<stdio.h>
// int main(){
//     int a;
//     printf("Input a number between 1 to 12 to get the month name:- ");
//     scanf("%d",&a);
//     if (a==1){
//             printf("January");
//         }
//     else if (a==2){
//             printf("February");
//         }
//     else if (a==3){
//             printf("March");
//         }
//     else if (a==4){
//             printf("April");
//         }
//     else if (a==5){
//             printf("May");
//         }
//     else if (a==6){
//             printf("June");
//         }
//     else if (a==7){
//             printf("July");
//         }
//     else if (a==8){
//             printf("August");
//         }
//     else if (a==9){
//             printf("September");
//         }
//     else if (a==10){
//             printf("October");
//         }
//     else if (a==11){
//             printf("November");
//         }
//     else if (a==12){
//             printf("December");
//         }
//     else{
//         printf("Invaild Months!");
//     }
//     return 0;
// }
int main() {
    int mno;
    printf("\nInput a number between 1 to 12 to get the month name: ");
    scanf("%d", &mno);
    switch(mno) {
        case 1 : printf("January\n"); break; 
        case 2 : printf("February\n"); break;
        case 3 : printf("March\n"); break;
        case 4 : printf("April\n"); break;
        case 5 : printf("May\n"); break;
        case 6 : printf("June\n"); break;
        case 7 : printf("July\n"); break;
        case 8 : printf("August\n"); break;
        case 9 : printf("September\n"); break;
        case 10 : printf("October\n"); break;
        case 11 : printf("November\n"); break;
        case 12 : printf("December\n"); break;
        default : printf("Input a number between 1 to 12."); 
    }
    return 0;
}