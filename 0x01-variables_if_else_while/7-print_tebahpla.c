#include <stdio.h>
/**
*main -Entry point
*code: content of code
*Return: Always O (success)
*/
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
