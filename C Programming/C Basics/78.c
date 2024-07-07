#include<stdio.h>
int main()
{
    int x = 10; 
    printf("Predecrementing:\n");
    printf("x   = %d\n", x); // Print current value of x
    printf("x-- = %d\n", x--); // Print x and then decrement it
    printf("x   = %d\n\n", x); // Print updated value of x
    x = 10; 
    printf("Postdecrementing:\n");
    printf("  x = %d\n", x); // Print current value of x
    printf("--x = %d\n", --x); // Decrement x and then print it
    printf("  x = %d\n", x); // Print updated value of x
    return 0;
}
