#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Entry point
 * @c: parameter
 * Return: 1 if is letter, lowwercase or uppercase
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

