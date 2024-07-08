#include <stdio.h>
void print_Histogram ( int *hist, int n );
int main() {
   int i, j;
   int inputValue, hist_value=0;
   printf("Input number of histogram bar (Maximum 10): \n");  
   scanf("%d", &inputValue);
   int hist[inputValue];
   if (inputValue<=10)
   {    
    printf("Input the values between 0 and 10 (separated by space): \n");
    for (i = 0; i < inputValue; ++i) {
      scanf("%d", &hist_value);     
      if (hist_value>=1 && hist_value<=10)
	   hist[i] = hist_value;
	   hist_value=0;
     }
    int results[10] = {0};
    for(j = 0; j < inputValue; j++) {
         if ( hist[j] == i){
            results[i]++;
         }
    }
    printf("\n");
    print_Histogram(hist, inputValue);
   }
    return 0;
}
void print_Histogram(int *hist, int n) {
      printf("\nHistogram:\n");
	  int i, j;
      for (i = 0; i < n; i++) {
      for ( j = 0; j < hist[i]; ++j) {
      printf("#");
      }
      printf("\n");
   }
}

