#include "main.h"

/**
 * _isdigit - Function that checks for a digit (0 - 9)
 * @c: integer
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
