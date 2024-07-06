// #include<stdio.h>
// int main(){
//     int i;
//     char week[7][4]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
//     for(i=0;i<7;i++){
//       printf("%s = %d\n",week[i],i);
//       }
//     return 0;
// }
#include <stdio.h>
int main() {
    // Define an enumeration type 'week'
    enum week {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

    // Print the values of the days using the enumeration constants
    printf("Sun = %d", Sun);
    printf("\nMon = %d", Mon);
    printf("\nTue = %d", Tue);
    printf("\nWed = %d", Wed);
    printf("\nThu = %d", Thu);
    printf("\nFri = %d", Fri);
    printf("\nSat = %d", Sat);

    return 0;
}
