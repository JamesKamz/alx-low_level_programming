#include <stdio.h>
/**
*main: -Entry point
*code: content of code
*Return: Always 0 (success)
*/
int main(void)
{
char ch;
int num;
for (num = 0; num <=9; num++)
{
putchar((num % 10) + '0');
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\0');
return (0);
}
