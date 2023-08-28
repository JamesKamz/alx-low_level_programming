#include <stdio.h>
/**
*main -Entry point
*code: content of code
*Return: Always 0 (success)
*/
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar((num % 10) + '0');
}
putchar('\n');
return (0);
}
