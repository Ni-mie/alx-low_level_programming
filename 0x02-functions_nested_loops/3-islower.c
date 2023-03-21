#include "main.h"

/**
 * int _islower - a function that checks for lowercase character.
 * @c: checks input of function
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
