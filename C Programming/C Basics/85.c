#include <stdio.h>
int main()
{   
int i, x;
printf("Decimal  Roman\n");
printf("number   numeral\n");
printf("-------------------\n");
for(i = 1; i<= 100; i++)
    {
        x = i; 
printf("%d        ", x); 
if(x == 100) {
printf("C"); 
            x = 0; 
        }
if(x >= 50) {
printf("L"); 
            x -= 50; 
        }
while(x >= 10) {
printf("X");
            x -= 10; 
        }
if(x >= 5) {
if(x % 10 == 9) {
printf("IX"); 
                x -= 9;
            }
else {
printf("V"); 
                x -= 5; 
            }   
        }
while(x > 0) 
        {
if(x % 10 == 4) {
printf("IV"); 
                x -= 4;
            }
else {
printf("I"); 
                x -= 1; 
            }
        }
printf("\n"); 
    }
return 0;
}

