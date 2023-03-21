#include "main.h"

/**
 * print_sign - Function that prints the sign of a number.
 * @n: starting point
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar (48 + 0);
		return (0);
	}
	else
	{
		_putchar (45 + 0);
		return (-1);
	}
}
