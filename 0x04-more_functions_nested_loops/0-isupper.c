#include "main.h"

/**
 * _isupper - Function that checks for uppercase character.
 * @c: integer unit
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
