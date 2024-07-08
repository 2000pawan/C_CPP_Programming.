#include <stdio.h>
#include <string.h>
const char ftr[] = {1,1,2,6,4,4,4,8,4,6};
void comp(char i[], int* len)
{
int j;
char c, tmp;
if(i[0] < 5)
    {
        c = i[0];
        (*len)--;
for(j = 0; j < *len; j++)
        {
tmp = (c*10 + i[j+1]) % 5;
i[j] = (c*10 + i[j+1]) / 5;
            c = tmp;
        }
    }
else
    {
        c = 0;
for(j = 0; j < *len; j++)
        {
tmp = (c*10 + i[j]) % 5;
i[j] = (c*10 + i[j]) / 5;
            c = tmp;
        }
    }
}
char fact(char i[], int len)
{
char ans, c, d;
if(len == 1 &&i[0] < 5)
return ftr[(int)i[0]];
else
    {
ans = ftr[(int)i[len-1]] * 6 % 10;
comp(i, &len);
        d = (i[len-1] + ((len> 1) ? i[len-2] * 10 : 0)) & 0x03;
for(c = 0; c < d; c++)
        {
if(ans == 2 || ans == 6)
ans += 10;
ans /= 2;
        }
return fact(i, len) * ans % 10;
    }
}
int main()
{
char chr[1002];
int len, i;
char c;
printf("Input a positive number:\n");
scanf("%s", chr);
len = strlen(chr);
for(i = 0; i<len; i++)
chr[i] -= '0';
    c = fact(chr, len);
printf("The last non-zero digit of the said factorial:\n");
putchar(c + '0');
putchar(10);
return 0;
}
