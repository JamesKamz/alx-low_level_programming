#include "main.h"
#include <ctype.h>
/**
 * _islower - Entry point
 *@c: parameter
 * Return: 1 if is lowercase and 0 otherwise
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

