#include "main.h"
#include <string.h>
/**
 * _strpbrk - Function that searches a string for any of a set of bytes.
 * @s: Input
 * @accept: Input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	ptr = strpbrk(s, accept);

	if (ptr != NULL)
	{
		return (ptr);
	}
	else
		return (NULL);
}
