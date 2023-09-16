#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0
 */
int main()
{
int total_sum = 0;
for (int num = 1; num < 1024; num++)
{
if (number % 3 == 0 || number % 5 == 0)
{
total_sum += number;
}
}
printf("The sum of all multiples of 3 or 5 below 1024 is: %d\n", total_sum);
return (0);
}

