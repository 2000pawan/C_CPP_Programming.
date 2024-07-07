#include <stdio.h>
int is_Palindrome(int);
int main()
{
int n;
printf("Input a five-digit number: ");
scanf("%d", &n);
if (is_Palindrome(n))
printf("%d is a palindrome.", n);
else
printf("%d is not a palindrome.", n);
return 0;
}
int is_Palindrome(int n) {
int x = n;
int reverse_num = 0;
reverse_num += x / 10000;
    x = x - ((x / 10000) * 10000);
reverse_num += ((x / 1000) * 10);
    x = x - ((x / 1000) * 1000);
reverse_num += ((x / 100) * 100);
    x = x - ((x / 100) * 100);
reverse_num += ((x / 10) * 1000);
    x = x - ((x / 10) * 10);
reverse_num += ((x % 10) * 10000);
return n == reverse_num;
}
