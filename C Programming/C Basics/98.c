#include <stdio.h>
int main() {
long nc = 0;      
int new_l = 0;      
int n_word = 0;      
int chr;            
int flag = 0;        
int last = 0;    
printf("Input some text:\n");
while ((chr = getchar()) != EOF) {
    ++nc;  
if (chr == ' ' || chr == '\t') {
flag = 0;  
    } else if (chr == '\n') {
      ++new_l;  
flag = 0;  
    } else {
if (flag == 0) {
        ++n_word;  
      }
flag = 1; 
    }
if (flag == 0 && last == 0) {
printf("\n");
last = 1;     
    } else {
putchar(chr); 
last = 0;    
    }
  }
}
