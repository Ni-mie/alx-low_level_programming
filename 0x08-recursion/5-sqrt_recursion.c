#include "main.h"

int real_sqrt(int n, int j);
/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: integer
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt(n, 0));
}

/**
 * real_sqrt - Function that returns the natural square root of a number.
 * @j: integer
 * @n: integer
 * Return: Always 0 (Success)
 */
int real_sqrt(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (real_sqrt(n, j + 1));
}
