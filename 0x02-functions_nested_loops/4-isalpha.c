#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic character.
 * @c: input for the function.
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
