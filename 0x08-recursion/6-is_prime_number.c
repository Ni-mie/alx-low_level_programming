#include "main.h"

int prime_number(int n, int i);
/**
 * is_prime_number - Function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: integer
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		return (prime_number(n, n - 1));
}

/**
 * prime_number - Function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: integer
 * @i: integer
 * Return: Always 0 (Success)
 */
int prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
		return (prime_number(n, i - 1));
}
