#include <stdio.h>
#include <math.h>

int main (){
  // Declare three integer variables
  int x, y, z;

  // Prompt the user to input three integers
  printf("Input 3 integers: ");

  // Read the input values for x, y, and z
  scanf("%d %d %d", &x, &y, &z);

  // Print a separator line for clarity
  printf("\n---------------------------\n");

  // Display the original input numbers
  printf("Original numbers: %d, %d, %d", x, y, z);

  // Display the sorted numbers
  printf("\nSorted numbers: ");

  // Nested if-else statements to sort and print the numbers
  if (x <= y && y <= z){
    printf("%d, %d, %d", x, y, z);
  }
  else{
    if (x <= z && z <= y){
      printf("%d, %d, %d", x, z, y);
    }
    else{
      if (y <= x && x <= z){
        printf("%d, %d, %d", y, x, z);
      }
      else{
        if (y <= z && z <= x){
         printf("%d, %d, %d", y, z, x);
        }
        else{
          if (z <= x && x <= y){
            printf("%d, %d, %d", z, x, y);
          }
          else{
            if (x == y && y == z){
              printf("%d, %d, %d", x, y, z);
            }
            else{
              printf("%d, %d, %d", z, y, x);
            }
          }
        }
      }
    }
  }
}
