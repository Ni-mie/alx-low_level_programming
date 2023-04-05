#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number.
 * @n: integer
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	int s = 0;

	if (n < 1)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		s = n * factorial(n - 1);
		return (s);
	}
}
