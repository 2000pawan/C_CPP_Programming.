#include <stdio.h>

int main() {
int blank_char, tab_char, new_line; // Variables to count blank characters, tab characters, and newlines
blank_char = 0; // Initialize the count of blank characters
tab_char = 0; // Initialize the count of tab characters
new_line = 0; // Initialize the count of newlines
int c; // Variable to hold input characters

printf("Number of blanks, tabs, and newlines:\n");
printf("Input few words/tab/newlines\n");
for (; (c = getchar()) != EOF;) {
if (c == ' ') {
      ++blank_char; // Increment the count of blank characters
    }
if (c == '\t') {
      ++tab_char; // Increment the count of tab characters
    }
if (c == '\n') {
      ++new_line; // Increment the count of newlines
    }
  }
printf("blank=%d,tab=%d,newline=%d\n", blank_char, tab_char, new_line);
}
